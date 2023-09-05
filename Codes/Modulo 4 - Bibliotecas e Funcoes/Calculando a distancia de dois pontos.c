//Calculando a distancia de dois pontos através das coordenadas dadas
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double xa, ya, xb, yb, distancia;

    printf("---Calculando a distância de A a B---\n\nDigite valores para a coordenada de A\nxa = ");
    scanf("%lf", &xa);
    printf("ya = ");
    scanf("%lf", &ya);

    printf("\nDigite valores para a coordenada de B\nxb = ");
    scanf("%lf", &xb);
    printf("yb = ");
    scanf("%lf", &yb);

    distancia = sqrt((pow(xa - xb,2)+ pow(yb - ya, 2)));
    printf("\nA distância de 'A' a 'B' é de %.2lf", distancia);

    return 0;
}
