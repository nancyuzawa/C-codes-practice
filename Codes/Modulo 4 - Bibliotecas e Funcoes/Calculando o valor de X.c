//Calculando o valor de x, na qual x = 

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float y, z, x, PotY, PotZ;

    printf("Digite um valor para 'y': ");
    scanf("%f", &y);
    printf("Digite um valor para 'z': ");
    scanf("%f", &z);

    PotY = pow(y, 2);
    printf("\ny^2 = %.2f", PotY);
    PotZ  = pow(z, 3);
    printf("\nz^3 = %.2f", PotZ);

    x = PotY + PotZ + 1;

    printf("\n\nO valor de x é de = %.2f", x);

    return 0;
}
