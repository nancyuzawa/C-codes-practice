#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, par = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);
    printf("\n");

    for(int cont = 1; cont <= num; cont +=1){
        printf("%d  ", par);
        par += 2;
    }
    return 0;
}
