//Programa que lê um número e retorna seu sucessor e seu antecessor

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int num;
    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    printf("\n\nAntecessor: %d", num-1);
    printf("\nSucessor: %d", num+1);

    return 0;
}
