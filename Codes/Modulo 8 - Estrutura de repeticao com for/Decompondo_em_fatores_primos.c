#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num, decomposicao, primo;

    do{
        printf("Digite um número inteiro e positivo: ");
        scanf("%d", &num);

    }while(num < 0);

  //  printf("\nNúmeros primos até %d: \n", num);
    printf("\nNÚMERO\tFATORES");


    for (int i = 2; i <= num; i++) {
        int isPrime = 1; // Supomos que i é primo

        for (int j = 2; j < i; j++) {
            if (i % j == 0) {
                isPrime = 0; // i não é primo
                break;
            }
        }
        if (isPrime) {
            if(num % i == 0){
                decomposicao = num;
                do{
                    printf("\n %d\t%d", decomposicao,i);
                    decomposicao /= i;
                }while(decomposicao % i == 0);
                num = decomposicao;
            }
        }
    }
    printf("\n 1");
    return 0;
}
