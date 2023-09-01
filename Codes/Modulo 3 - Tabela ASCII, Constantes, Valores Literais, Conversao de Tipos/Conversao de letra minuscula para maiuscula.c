#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    char letra, maiuscula;

    printf("Digite uma letra maiúscula: ");
    scanf(" %c", &letra);

    maiuscula = letra - 32;

    printf("\n\nEm maiúscula: %c\nNa tabela ASCII = %d", maiuscula, maiuscula);
    return 0;
}
