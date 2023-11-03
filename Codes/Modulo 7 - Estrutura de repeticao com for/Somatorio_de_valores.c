#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int num, soma = 0;

    for(int cont = 1; cont <= 10; cont++){
        printf("Digite um número inteiro: ");
        scanf("%d", &num);
        printf("%dº Número", cont);
        soma = soma + num;
        printf(" - Soma: %d\n\n", soma);
    }
    printf("\n\n");
    system("pause");
    system("cls");
    printf("Soma total: %d", soma);
    printf("\n\nFim da execução\n");
    return 0;
}
