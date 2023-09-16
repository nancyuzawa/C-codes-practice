#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num;

    printf("Digite o código de origem: ");
    scanf("%d", &num);

    switch (num){
        case 1:
            printf("Sul");
            break;
        case 2:
            printf("Norte");
            break;
        case 3:
            printf("Leste");
            break;
        case 4:
            printf("Oeste");
            break;
        case 5:
            printf("Nordeste");
            break;
        case 6:
            printf("Nordeste");
            break;
        case 7:
            printf("Sudeste");
            break;
        case 8:
            printf("Sudeste");
            break;
        case 9:
            printf("Sudeste");
            break;
        default:
            printf("Código Inválido!");
    }
    return 0;
}
