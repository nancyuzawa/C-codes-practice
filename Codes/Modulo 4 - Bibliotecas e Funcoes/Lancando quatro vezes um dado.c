//Sorteio aleatório de um dado

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int min = 1, max = 6, randomico;

    srand(time(NULL));
    randomico = (min + (rand() % (max - min + 1)));

    printf ("\nLançamento de um dado 4 vezes:\n1ºNúmero: %d", randomico);
    randomico = (min + (rand() % (max - min + 1)));
    printf("\n2ºNúmero: %d", randomico);
    randomico = (min + (rand() % (max - min + 1)));
    printf("\n3ºNúmero: %d", randomico);
    randomico = (min + (rand() % (max - min + 1)));
    printf("\n4ºNúmero: %d\n", randomico);

    return 0;
}
