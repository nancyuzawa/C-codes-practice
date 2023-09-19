#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, min = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    printf("\nSequência decrescente: ");
    while(min <= num){
        printf("%d, ", num);

        num -= 1;
    }

    return 0;
}
