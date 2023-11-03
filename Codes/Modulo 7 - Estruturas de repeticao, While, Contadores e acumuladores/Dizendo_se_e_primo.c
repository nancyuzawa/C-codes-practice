#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, contador = 1, vezes = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num>0){
        while (contador <= num){
            if(num%contador == 0){
                vezes += 1;
            }
            contador += 1;
        }
    }
    else{
        printf("O número NÃO É PRIMO\n");
        return 0;
    }

    printf("Quantidade de divisores: %d\n", vezes);

    if (vezes <= 2 ){
        printf("O número É PRIMO\n");
    }
    else{
        printf("O número NÃO É PRIMO\n");
    }
    return 0;
}
