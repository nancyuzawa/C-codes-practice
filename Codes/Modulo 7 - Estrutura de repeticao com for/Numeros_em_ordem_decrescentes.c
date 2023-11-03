#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("\nNúmeros de %d à 0\n\n", num);

    for(num; num >= 0; num --){
        printf("%d", num);
        if(num != 0){
            printf(", ");
        }
        else{
            printf(".");
        }
    }

    printf("\n\nFim da execução\n");
    return 0;
}
