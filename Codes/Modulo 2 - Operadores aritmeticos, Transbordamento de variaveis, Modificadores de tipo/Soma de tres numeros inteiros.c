//Programa que l� 3 n�meros inteiros e retorna sua soma

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, soma;
    printf("Digite o 1� n�mero: ");
    scanf("%d", &num1);
    printf("Digite o 2� n�mero: ");
    scanf("%d", &num2);
    printf("Digite o 3� n�mero: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("\n\nA soma dos n�meros �: %d", soma);

    return 0;
}
