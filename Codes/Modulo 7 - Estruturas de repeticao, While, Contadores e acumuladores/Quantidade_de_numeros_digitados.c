#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, contador;

    do{
        printf("Digite um número ");
        scanf("%d", &num);
        if(num >100 && num <200){
            contador += 1;
        }
    }
    while(num != 0);

    printf("\nEntre 100 à 200 foram digitados:  %d", contador);

    printf("\n\nFim da execução!");

    return 0;
}
