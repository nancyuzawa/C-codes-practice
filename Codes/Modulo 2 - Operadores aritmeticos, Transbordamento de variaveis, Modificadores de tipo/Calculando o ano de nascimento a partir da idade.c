//Calculando o ano de nascimento através da idade
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    int idade, anoNasc, anoAtual;
    anoAtual = 2023;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    anoNasc = anoAtual - idade;

    printf("\n\Seu ano de nascimento é: %d", anoNasc);

    return 0;
}
