#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

#define PI 3.1415926535

int main()
{
    setlocale(LC_ALL, "Portuguese");
    double parede, escada, grau;

    printf("---Calculando a medida de uma escada---\n\nDigite o ângulo (em graus) formado por uma escada apoiada no chão: ");
    scanf("%lf", &grau);
    printf("Altura da parede: ");
    scanf("%lf", &parede);

    //converter o grau para radiano
    grau = PI * (grau/180.0);

    escada = parede/sin(grau);
    printf("\n\nO comprimento da escada é de %.2lf metros", escada);

    return 0;
}
