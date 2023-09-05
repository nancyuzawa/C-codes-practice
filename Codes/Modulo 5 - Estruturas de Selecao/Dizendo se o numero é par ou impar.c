#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if(num % 2 == 0){
        printf("\nO número %d é PAR.", num);
    } else{
        printf("\nO número %d é ÍMPAR.", num);
    }


    return 0;
}
