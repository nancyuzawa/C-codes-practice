#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"Portuguese");

    for(int cont = 1; cont <= 100; cont ++){
        printf("%d", cont);
        if(cont != 100){
            printf(", ");
        }
        else{
            printf(".");
        }
    }

    printf("\n\nFim da execução\n");
    return 0;
}
