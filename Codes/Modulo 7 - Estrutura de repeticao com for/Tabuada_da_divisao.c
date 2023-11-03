//TABUADA DA DIVISÃO
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
     setlocale(LC_ALL,"Portuguese");
     int num, i, cont = 0, resultado = 1, divisor;

     printf("Digite um número: ");
     scanf("%d", &num);
     printf("\nTABUADA DA DIVISÃO\n");

     if(num >= 0){
        for(i = 1; i <= 10 && resultado <= 10; i++, resultado++){   //eu estava errando pq estava querendo dividir o numero por 0. E isso já dá problema. Por isso começar o i=1
            divisor = resultado * num;
            printf("\n%d / %d = %d", divisor, num, resultado);
         }
     }
     else{
        printf("\n\nO número não é positivo!");
     }

     return 0;
}
