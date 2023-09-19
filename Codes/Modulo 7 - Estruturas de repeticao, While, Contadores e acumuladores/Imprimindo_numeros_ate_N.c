/*Imprimindo em ordem crescente todos os 
números inteiros e positivos de 0 até N
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, contador = 0;

    printf("Digite um número: ");
    scanf("%d", &num);
    printf("\nSequência: ");

    while(contador <= num){
        printf("%d, ", contador);
        contador += 1;
    }

    return 0;
}
