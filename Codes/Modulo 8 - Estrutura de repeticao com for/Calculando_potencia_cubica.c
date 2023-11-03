#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


int main(){
    setlocale(LC_ALL, "Portuguese");
    int i, guarda = 0, impar, j, num, soma = 0;

    printf("Digite um numero: ");
    scanf("%d", &num);

    for(i = 1; i<= num; i ++){
        guarda +=i;
    }
    guarda -= num;
    for(impar = 1, j = 1; j<=guarda; impar += 2, j++){
    }
    printf("\nnúmero impares consecutivos: ");
    for(i=0; i <= num; i++){
        for(impar, i = 0; i < num; i ++, impar +=2){
            guarda = 0;
            guarda += impar;
            soma += guarda;
            printf("%d  ",guarda);
        }
    }
    printf("\n%d^3 = %d",num, soma);

    return 0;
}
