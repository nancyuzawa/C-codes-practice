#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float habitanteA = 5000000.0, habitanteB = 7000000.0;
    int contador = 0;

    while ((int)habitanteA <= (int)habitanteB){

        habitanteA += (habitanteA * 3/100);
        habitanteB += (habitanteB * 2/100);

        contador += 1;
    }
    printf("Natalidade A: %d\nNatalidade B: %d", (int)habitanteA, (int)habitanteB);
    printf("\n\nAnos: %d", contador);


    return 0;
}
