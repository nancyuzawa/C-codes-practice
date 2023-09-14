/*Na qual:

VENDA MÉDIA MENSAL |      PREÇO ATUAL    |  AUMENTO | DIMINUIÇÃO|
-------------------|---------------------|----------|-----------|
      <500         |    < R$ 30,00       |   10%    |     -     |
-------------------|---------------------|----------|-----------|
  >=500 E <1200    |>=R$30,00 E <R$80,00 |   15%    |     -     |
-------------------|---------------------|----------|-----------|
      >=1200       |    >=R$80,00        |    -     |    20%    |
-------------------|---------------------|----------|-----------|
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float precoAtual, novoPreco;
    int vendaMensal;

    printf("Valor do produto: R$");
    scanf("%f", &precoAtual);
    printf("Quantidade vendidas mensalmente: ");
    scanf("%d", &vendaMensal);
    
    if (vendaMensal < 500 || precoAtual < 30.0){
            novoPreco = precoAtual + (precoAtual * 10/100);
    }
    else if ((vendaMensal >= 500 && vendaMensal < 1200) || (precoAtual >= 30.0 && precoAtual < 80.0)){
             novoPreco = precoAtual + (precoAtual *15/100);
    }
    else if (vendaMensal >= 1200 || precoAtual >= 80.0){
        novoPreco = precoAtual  - (precoAtual * 20/100);
    }
    
    printf("\nReajuste: R$%.2f",novoPreco);

    return 0;
}
