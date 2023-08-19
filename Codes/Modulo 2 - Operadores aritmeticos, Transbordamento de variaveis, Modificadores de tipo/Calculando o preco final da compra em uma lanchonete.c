//Programa que lê a quantidade de cada item consumido
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    float Hamburguer, Cheeseburger, Fritas, Refrigerante, Milkshake, Total;
    Hamburguer = 3.00;
    Cheeseburger = 2.50;
    Fritas = 2.50;
    Refrigerante = 1.00;
    Milkshake = 3.00;

    puts("\tCardápio:\nHambúrguer.................. R$ 3,00\nCheeseburger.............. R$ 2,50\nFritas......................... R$ 2,50\nRefrigerante................. R$ 1,00\nMilkshake..................... R$ 3,00");

    printf("\nQuantidade de Hamburguer: ");
    scanf("%f", &Hamburguer);
    printf("Quantidade de Cheeseburger: ");
    scanf("%f", &Cheeseburger);
    printf("Quantidade de Fritas: ");
    scanf("%f", &Fritas);
    printf("Quantidade de Refrigerante: ");
    scanf("%f", &Refrigerante);
    printf("Quantidade de Milkshake: ");
    scanf("%f", &Milkshake);

    Total = (Hamburguer*3) + (Cheeseburger*2.5) + (Fritas*2.5) + (Refrigerante*1) + (Milkshake*3);

    printf("\n\nTotal da compra: R$%.2f", Total);

    return 0;
}
