#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, maior, menor;

    do{
        printf("Digite um número ");
        scanf("%d", &num);

        if(num > maior){
            maior = num;
            printf("Maior: %d\n\n", maior);
        }
        else if(num == maior){
            printf("É igual ao MAIOR número digitado anteriormente\n\n");
        }
        else if(num == menor){
            printf("É igual ao MENOR número digitado anteiormente\n\n");
        }
        else if(num < menor && num >= 0){
            menor = num;
            printf("Menor: %d\n\n", menor);
        }
        else{
            printf("NÃO é o MENOR E NEM O MAIOR número digitado\n\n");
        }
    }
    while(num >= 0);

    system ("cls");
    printf("MAIOR número digitado: %d\nMENOR número digitado: %d", maior, menor);
    printf("\n\nFim da execução!");

    return 0;
}
