#include <stdio.h>
#include <stdlib.h>

int main()
{
    float prestacao, valor, taxa;
    int tempo;

    printf("Digite o valor em atraso: ");
    scanf("%f", &valor);

    printf("Digite a taxa de juros: ");
    scanf("%f", &taxa);

    printf("Digite o total de dias em atraso: ");
    scanf("%d", &tempo);

    prestacao = valor + (valor*(taxa/100.0) * tempo);

    printf("\nValor da prestacao: R$ %.2f; \n", prestacao);

    return 0;
}
