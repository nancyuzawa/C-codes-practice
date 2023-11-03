/*Informar:
a) A média de salário dos homens;
b) A média de salário das mulheres;
c) A média de salário dos funcionários;
d) A idade do homem mais velho;
e) A idade da mulher mais nova;*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    int pessoa, idade, homemIdade = 0, mulherIdade = 0, qntHomem = 0, qntMulher = 0;
    float salario, salarioM = 0.0, salarioH = 0.0, mediaSalario = 0.0;
    char sexo;

    for(pessoa = 1; pessoa <= 10; pessoa ++){
        printf("%dª PESSOA\nIdade: ", pessoa);
        scanf("%d", &idade);
        printf("Digite o sexo(F/M): ");
        scanf(" %c", &sexo);
        printf("Salário: ");
        scanf("%f", &salario);
        printf("\n\n");
        if(toupper(sexo) == 'M'){
            salarioH += salario;
            qntHomem ++;
            if(idade > homemIdade){
                homemIdade = idade;
            }
        }
        else if(toupper(sexo) == 'F'){
            salarioM += salario;
            qntMulher ++;
            if(mulherIdade == 0 || mulherIdade > idade){
                mulherIdade = idade;
            }
        }
    }
    mediaSalario = (salarioH + salarioM)/(pessoa - 1);
    printf("\n\n\nMasculino salario: %.2f", salarioH/qntHomem);
    printf("\nFeminino salario: %.2f", salarioM/qntMulher);
    printf("\nMédia dos salários dos funcionários: %.2f", mediaSalario);
    printf("\nIdade do homem mais velho: %d", homemIdade);
    printf("\nIdade da mulher mais nova: %d", mulherIdade);
    return 0;
}
