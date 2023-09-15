#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float x, y, z;

    printf("Lado 1: ");
    scanf("%f", &x);
    printf("Lado 2: ");
    scanf("%f", &y);
    printf("Lado 3: ");
    scanf("%f", &z);

    if ((x < y + z) && (y < z + x) && (z < y + x)){
        if (x == y && x == z){
            printf("Triângulo Equilátero!!");
        }
        else if (x == y || x == z || y == z){
            printf("Triângulo Isósceles!!");
        }
        else{
            printf("Triângulo Escaleno!!");
        }
    }
     else{
            printf("NÃO É UM TRIÂNGULO!!");
        }
    return 0;
}
