#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float nota1, nota2, nota3, media, peso1, peso2, peso3;
    int opcao;
    char escolha;

    do{
        printf("Menu de opções:\n\n1. Média aritmética\n2. Média ponderada\n3. Sair\nDigite a sua opção: ");
        scanf("%d", &opcao);
        system("cls");


        switch(opcao){
            case 1:
                printf("OPÇÃO 1 (média aritmética)\nNota 1: ");
                scanf("%f", &nota1);
                printf("Nota 2: ");
                scanf("%f", &nota2);

                media = (nota1 + nota2)/2;

                printf("\n\nMédia aritmética = %.2f", media);
                printf("\n\n**Deseja sair? (S/N)");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    opcao = 3;
                }
                break;
            case 2:
                printf("OPÇÃO 2 (média ponderada)\nNota 1: ");
                scanf("%f", &nota1);
                printf("Nota 2: ");
                scanf("%f", &nota2);
                printf("Nota 3: ");
                scanf("%f", &nota3);

                printf("\nPeso da nota 1: ");
                scanf("%f", &peso1);
                printf("Peso da nota 2: ");
                scanf("%f", &peso2);
                printf("Peso da nota 3: ");
                scanf("%f", &peso3);

                media = ((nota1 * peso1) + (nota2 * peso2) + (nota3 * peso3))/(peso1 + peso2 + peso3);
                printf("Média ponderada: %.2f", media);

                printf("\n\n**Deseja sair? (S/N)");
                scanf(" %c", &escolha);
                if(escolha == 'S' || escolha == 's'){
                    opcao = 3;
                }
                break;
            case 3:
                break;
            default:
                printf("OPÇÃO INVÁLIDA!\n");
                system("pause");
                break;
        }
        system("cls");
        fflush(stdin);
    } while(opcao != 3);
    printf("Fim da execução\n");

    return 0;
}
