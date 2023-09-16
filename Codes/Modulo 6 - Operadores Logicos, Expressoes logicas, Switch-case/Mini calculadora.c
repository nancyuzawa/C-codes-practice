#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int opcao;
    float num1, num2, resultado;

    printf("OPERADORES MATEMÁTICOS\n\n1- Adição\n2- Subtração\n3- Multiplicação\n4- Divisão");
    printf("\n\nEscolha uma opção: ");
    scanf("%d", &opcao);
    system("cls");

    switch (opcao){
        case 1:
            printf("1- Adição");
            printf("\nDigite o 1º número: ");
            scanf("%f", &num1);
            printf("Digite o 2º número: ");
            scanf("%f", &num2);

            resultado = num1 + num2;
            printf("\nResultado: %.2f", resultado);
            break;
        case 2:
            printf("2- Subtração");
            printf("\nDigite o 1º número: ");
            scanf("%f", &num1);
            printf("Digite o 2º número: ");
            scanf("%f", &num2);

            resultado = num1 - num2;
            printf("\nResultado: %.2f", resultado);
            break;
        case 3:
            printf("3- Multiplicação");
            printf("\nDigite o 1º número: ");
            scanf("%f", &num1);
            printf("Digite o 2º número: ");
            scanf("%f", &num2);

            resultado = num1 * num2;
            printf("\nResultado: %.2f", resultado);
            break;
        case 4:
            printf("4- Divisão");
            printf("\nDigite o 1º número: ");
            scanf("%f", &num1);
            printf("Digite o 2º número: ");
            scanf("%f", &num2);

            resultado = num1 / num2;
            printf("\nResultado: %.2f", resultado);
            break;
        default:
            printf("Opção inválida!");
    }
    return 0;
}
