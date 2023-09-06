//Verificando se o primeiro valor é múltiplo do segundo valor
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int num1, num2;

    printf("Digite o 1º número: ");
    scanf("%d", &num1);
    printf("Digite o 2º número: ");
    scanf("%d", &num2);

    if(num1 % num2 == 0){
        printf("\n%d é múltiplo de %d.", num1, num2);
    } else{
        printf("\n%d Não é múltiplo de %d.", num1, num2);
    }
    return 0;
}
