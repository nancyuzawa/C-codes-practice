/*Apresentar o total de recursos arrecadados (somatório das multas de todos motoristas). O programa também deverá mostrar o
número da carteira e a quantidade de multas do motorista que obteve o maior número de multas. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    int motorista, carteiraMotorista, multas,  valorMulta, guardaMaiorMulta = 0, motoMaior = 0;
    float valorTotal, valorArrecadado =0.0, maiorMulta = 0.0;

    for(motorista = 1; motorista <= 10; motorista++){
        printf("Pessoa %d\n", motorista);
        printf("Digite a carteira de motorista(4 digitos): ");
        scanf("%d", &carteiraMotorista);
        printf("Digite a quantidade de multas: ");
        scanf("%d", &multas);
        printf("Digite o valor da multa: ");
        scanf("%d", &valorMulta);
        valorTotal = valorMulta*multas;
        if(maiorMulta <= valorTotal){
            maiorMulta = valorTotal;
            motoMaior = carteiraMotorista;
            guardaMaiorMulta = multas;
        }
        valorArrecadado += valorTotal;
        system("cls");
    }
    printf("\n\nValor total arrecadado R$%.2f", valorArrecadado);
    printf("\n------------------------------------------------");
    printf("\nMOTORISTA COM MAIOR MULTA");
    printf("\nCarteira de motorista: %d", motoMaior);
    printf("\nQuantidade de multas: %d\n\n", guardaMaiorMulta);

    return 0;
}
