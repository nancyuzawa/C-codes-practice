#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, contador = 1, soma = 0, guardado;

    printf("Digite um número: ");
    scanf("%d", &num1);

    soma = num1;
    if (num1 < 100){
        while (soma < 100){
            printf("Digite OUTRO número: ");
            scanf("%d", &num1);

            guardado = num1;
            soma = guardado + soma;
            printf("\t**soma com o anterior: %d\n\n", soma);
            contador += 1;
            system("pause");
            system("cls");
            fflush(stdin);
        }
    }
    printf("Soma total = %d    \nQuantidade de vezes digitado: %d\n\n", soma, contador);
    return 0;
}
