#include <stdio.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int num1, num2, num3;

    printf("1º Número: ");
    scanf("%d", &num1);
    printf("2º Número: ");
    scanf("%d", &num2);
    printf("3º Número: ");
    scanf("%d", &num3);

    if (num1 <= num2 && num1 <= num3 && num2 <= num3){
        printf("Números ordenados: %d, %d, %d", num1, num2, num3);
    }
    else if(num1 <= num3 && num1 <= num2 && num3 <= num2){
        printf("Números ordenados: %d, %d, %d", num1, num3, num2);
    }
    else if(num2 <= num3 && num2 <= num1 && num3 <= num1){
        printf("Números ordenados: %d, %d, %d", num2, num3, num1);
    }
    else if(num2 <= num1 && num2 <= num3 && num1 <= num3){
        printf("Números ordenados: %d, %d, %d", num2, num1, num3);
    }
    else if(num3 <= num2 && num3 <= num1 && num2 <= num1){
        printf("Números ordenados: %d, %d, %d", num3, num2, num1);
    }
    else if(num3 <= num1 && num3 <= num2 && num1 <= num2){
        printf("Números ordenados: %d, %d, %d", num3, num1, num2);
    }
    return 0;
}
