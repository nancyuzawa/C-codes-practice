#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float num1, num2, inverso;
	
	printf("Digite o 1� n�mero: ");
	scanf("%f",&num1);
	printf("\nDigite o 2� n�mero: ");
	scanf("%f",&num2);
	
	inverso = num1;
	num1 = num2;
	num2 = inverso;
	printf("\nOrdem inversa:\n1� n�mero = %.2f\n2�n�mero = %.2f", num1, num2);
	
	return 0; 
}
