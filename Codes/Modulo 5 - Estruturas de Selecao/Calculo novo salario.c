/*Calculando o novo salário acrescido de bonificação:
 -Até R$500,00 -> aumento de 5% do salário;
 -Entre R$500,00 a R$1200,00 -> aumento de 12% do salário
 -Acima de R$1200,00 -> sem bonificação;
 
e de auxílio escola, na qual:
 -Até R$600,00 -> auxílio de R$150,00
 -Acima de R$600,00 -> auxílio de R$100,00
 */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float salario, bonificacao, auxilio, novoSalario;

    printf("Salario: R$ ");
    scanf("%f", &salario);


    if(salario <= 500.00){
        bonificacao = salario * 5.0/100.0;
    }
    else if (salario > 500.00 && salario <=1200.00){
        bonificacao = salario * 12.0 / 100.0;
    }
    else{
        bonificacao = 0.0;
    }

    if (salario <=600.0f){
            auxilio = 150.00;
        }
     else{
            auxilio = 100.00;
        }

    novoSalario = salario + bonificacao + auxilio;

    printf("\nAumento          R$ %.2f", bonificacao+auxilio);
    printf("\nNovo salário     R$ %.2f\n", novoSalario);

    return 0;
}
