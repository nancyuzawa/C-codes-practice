#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, maior = 0;

    printf("**Digite um número inteiro\n\n");
    for(int cont = 1; cont <= 5; cont++){
        printf("%dº número: ", cont);
        scanf("%d", &num);
        if(num > maior){
            maior = num;
        }
    }
    printf("\n\nO maior número digitado foi: %d", maior);
    printf("\n\nFim da execução\n");
    return 0;
}
