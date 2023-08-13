#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, inverso;
	
	printf("Digite o 1º número: ");
	scanf("%f",&num1);
	printf("\nDigite o 2º número: ");
	scanf("%f",&num2);
	
	inverso = num1;
	num1 = num2;
	num2 = inverso;
	printf("\nOrdem inversa:\n1º número = %.2f\n2ºnúmero = %.2f", num1, num2);
	
	return 0; 
}
