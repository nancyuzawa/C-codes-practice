#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");
    float altura;
    int alto = 0, baixo = 0, contador = 1;


    do{
        printf("%d - Altura do atleta: ", contador);
        scanf("%f", &altura);

        if(altura >= 1.9){
            alto += 1;
        }
        else if(altura < 1.9 && altura != 0){
            baixo += 1;
        }
        contador +=1;
    } while(altura != 0);

    printf("\n\nQuantidade de jogadores >= 1.9 metros: %d\nQuantidade de jogadores < 1.9 metros: %d", alto, baixo);
    printf("\nFim do programa!");
    return 0;
}
