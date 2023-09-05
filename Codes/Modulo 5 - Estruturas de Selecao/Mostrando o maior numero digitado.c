#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float num1, num2;

    printf("Digite o 1º número: ");
    scanf("%f", &num1);
    printf("Digite o 2º número: ");
    scanf("%f", &num2);

    if (num1>num2){
        printf("\nO primeiro número digitado é maior que o segundo");
        printf("\n\t(%.2f > %.2f)\n", num1, num2);
    } else{
        printf("\nO segundo número digitado é maior que o primeiro");
        printf("\n\t(%.2f > %.2f)\n", num2, num1);
    }

    return 0;
}
