#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, soma = 0;
    float media;

    printf("**Digite um número inteiro\n\n");
    for(int cont = 1; cont <= 10; cont++){
        printf("%dº número: ", cont);
        scanf("%d", &num);
        soma = soma + num;
    }
    media = (float)soma/10;
    printf("\n\nMédia aritmética: %.2f", media);
    printf("\n\nFim da execução\n");
    return 0;
}
