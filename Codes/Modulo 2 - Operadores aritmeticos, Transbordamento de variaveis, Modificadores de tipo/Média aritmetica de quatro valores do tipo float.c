//media aritmética de 4 valores

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float num1, num2, num3, num4, media;
    printf("Digite o 1º número: ");
    scanf("%f", &num1);
    printf("Digite o 2º número: ");
    scanf("%f", &num2);
    printf("Digite o 3º número: ");
    scanf("%f", &num3);
    printf("Digite o 4º número: ");
    scanf("%f", &num4);

    media = (num1 + num2 + num3 + num4)/4;

    printf("\n\nA soma dos números é: %.2f", meedia);

    return 0;
}
