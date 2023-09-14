//Calculando média aritmética e mostrando o resultado: Reprovado, Recuperação ou Aprovado
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");
    float nota1, nota2, nota3, media, novaNota;

    printf("Nota 1: ");
    scanf("%f", &nota1);
    printf("Nota 2: ");
    scanf("%f", &nota2);
    printf("Nota 3: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;
    printf("\nNota final: %.2f\n", media);

    if (media >= 0 && media <3){
        printf("Aluno Reprovado\n");
    }
    else if (media >=3 && media <7){
        printf("Aluno precisa fazer exame");
        //7 = (media + novaNota)/2;
        novaNota = 12 - media;
        printf("\nPrecisa no mínimo: %.2f\n", novaNota);
    }
    else if(media >= 7 && media <=10){
        printf("Aluno aprovado\n");
    }

    return 0;
}
