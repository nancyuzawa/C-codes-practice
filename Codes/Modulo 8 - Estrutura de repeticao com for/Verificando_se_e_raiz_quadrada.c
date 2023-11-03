#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int num, impar, raiz = 0, cont = 0;

     printf("Digite um número: ");
     scanf("%d", &num);

     if(num>=0){
        for(impar = 1; impar <= num; impar += 2){
            raiz = num - impar;
            num = raiz;
            cont ++;
        }
        if(num == 0){
            printf("\nO número tem raiz inteira\nRaiz = %d\n\n", cont);
        }
        else{
            printf("\nO número não possui raiz inteira!\n\n");
        }
     }
     else{
        printf("\nO número não é positivo!");
     }

     return 0;
}
