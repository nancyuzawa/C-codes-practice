#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int i,j, cont = 0, contando = 0;
    printf("Números 100 primeiros primos: ");
    
    for(i=2, contando; contando < 100 ; i++){
        for(j=1; j<=i; j++){
           if(i%j==0){
               cont ++;
           }
        }
        if(cont == 2){
           printf("%d  ",i);
           contando ++;
        }
        cont = 0;
    }

    return 0;
}
