#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int num, i, cont = 0;

     printf("Digite um número: ");
     scanf("%d", &num);

     if(num >= 0){
        for(i = 1; i <= num; i++){   //eu estava errando pq estava querendo dividir o numero por 0. E isso já dá problema. Por isso começar o i=1
            if (num%i == 0){
                cont ++;
            }
         }
         printf("\nTotal de divisores: %d", cont);
         if(cont <=2){
            printf("\nO número '%d' É PRIMO", num);
         }
         else{
            printf("\nO número '%d' NÃO É PRIMO", num);
         }
     }
     else{
        printf("\nO número não é positivo!");
     }

     return 0;
}
