#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, impar = 1;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    if(num >=0){
        for(int cont = 1; cont <= num; cont +=1){
            printf("%d   ", impar);
            impar += 2;
        }
    }
    else{
        printf("Não é um valor positivo!");
    }

    printf("\n\nFim da execução\n");
    return 0;
}
