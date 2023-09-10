/*Calculando o aumento de um salário na qual:
Menor que R$500,00 -> aumento de 5%
De R$500,00 (inclusive) a R$850,00 (inclusive)-> aumento de 10%
acima de R$850,00 -> aumento de 15%
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, aumento, novoSalario;

    printf("Salario: R$ ");
    scanf("%f", &salario);

    if (salario <500.00){
        aumento = salario * 5.0 / 100;
    }
    else if (salario >= 500.00 && salario <= 850.00){
        aumento = salario * 10.0 / 100;
    }
    else{
        aumento = salario * 15.0 / 100;
    }

    printf("\nAumento          R$ %.2f", aumento);

    novoSalario = salario + aumento;

    printf("\nNovo salário     R$ %.2f\n", novoSalario);

    return 0;
}
