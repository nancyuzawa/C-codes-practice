#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float a, b, c, delta, x, x1, x2;

    printf("Coeficiente 'a': ");
    scanf("%f",&a);
    printf("Coeficiente 'b': ");
    scanf("%f",&b);
    printf("Coeficiente 'c': ");
    scanf("%f",&c);


    if(a == 0){
        printf("A variável 'a' deve ser diferente de zero");
    } else {
        delta = pow(b, 2) - 4 *a*c;

        printf("\nDelta = %.2f",delta);
        if(delta<0){
            printf("\n\nNão existe raiz real");
        } else if(delta == 0){
            printf("\n\nExiste uma raiz real\n");
            x = (-b) /(2*a);
            printf("x = %.2f", x);
        }else{
            printf("\n\nExistem duas raízes reais\n");
            x1 = (-b + sqrt(delta))/(2*a);
            x2 = (-b - sqrt(delta))/(2*a);
            printf("x1 = %.2f\nx2 = %.2f", x1, x2);
        }
    }
    return 0;
}
