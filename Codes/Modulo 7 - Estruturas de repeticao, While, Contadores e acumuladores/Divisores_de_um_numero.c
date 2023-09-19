#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, contador = 1;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("\nOs divisores de %d são: \n", num);

    while (contador <=num){
        if(num%contador ==0){
            printf("%d  ", contador);
        }
        contador += 1;
        }
    return 0;
}
