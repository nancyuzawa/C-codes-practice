#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float dolar, real, cotacaoDolar;

    printf("Digite o valor em reais: R$");
    scanf("%f", &real);
    printf("Digite a cota atual do dolar: $");
    scanf("%f", &cotacaoDolar);

    dolar = real/cotacaoDolar;

    printf("\n\O valor do dolar é: $%.2f", dolar);

    return 0;
}
