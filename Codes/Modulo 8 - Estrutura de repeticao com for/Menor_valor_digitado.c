#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, menor;

    printf("**Digite um número inteiro\n\n");
    for(int cont = 1; cont <= 5; cont++){
        printf("%dº número: ", cont);
        scanf("%d", &num);
        if(num < menor || cont == 1){
            menor = num;
        }
    }
    printf("\n\nO MENOR número digitado: %d", menor);
    printf("\n\nFim da execução\n");
    return 0;
}
