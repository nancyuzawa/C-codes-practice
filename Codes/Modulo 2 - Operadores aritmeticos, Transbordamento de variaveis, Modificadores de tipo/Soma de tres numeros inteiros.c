//Programa que lê 3 números inteiros e retorna sua soma

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num1, num2, num3, soma;
    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);
    printf("Digite o 3º número: ");
    scanf("%d", &num3);

    soma = num1 + num2 + num3;

    printf("\n\nA soma dos números é: %d", soma);

    return 0;
}
