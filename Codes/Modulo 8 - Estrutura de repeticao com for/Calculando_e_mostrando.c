/*calculando e mostrando na tela:
a) A quantidade de pessoas com idade superior a 50 anos;
b) média das alturas das pessoas com idade entre 10 e 20 anos;
c) A porcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas;*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL,"Portuguese");
    int idade, pessoa,contMaior50 = 0, contAltura = 0, contPesoInferior = 0;
    float peso, altura, mediaAltura = 0;
    for(pessoa = 1; pessoa <= 10; pessoa++){
        printf("Pessoa %d\n", pessoa);
        printf("Digite a idade: ");
        scanf("%d", &idade);
        printf("Digite a altura: ");
        scanf("%f", &altura);
        printf("Digite o peso: ");
        scanf("%f", &peso);
        if(idade > 50){
            contMaior50 ++;
        }
        else if(idade >10 && idade<20){
            contAltura ++;
            mediaAltura += altura;
        }
        if(peso < 40){
            contPesoInferior ++;
        }
        system("cls");
    }
    printf("A quantidade de pessoas com idade superior a 50 anos: %d", contMaior50);
    printf("\nMédia das alturas das pessoas com idade entre 10 e 20 anos: %.2f", mediaAltura/contAltura);
    printf("\nPorcentagem de pessoas com peso inferior a 40 quilos entre todas as pessoas: %d%", contPesoInferior * 100/10);

     return 0;
}
