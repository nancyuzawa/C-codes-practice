#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
	
    float prestacao, valor, taxa;
    int tempo;

    printf("***obs:utilizar vírgula, caso for utilizar casas decimais\n\nDigite o valor em atraso: R$");
    scanf("%f", &valor);
    printf("Insira a taxa de juros: ");
    scanf("%f", &taxa);
    printf("Insira o total de dias em atraso: ");
    scanf("%d", &tempo); 

    prestacao = valor + (valor*(taxa/100.0)*tempo);

    printf("\n\nPrestação: R$%.2f", prestacao);

    return 0;
}
