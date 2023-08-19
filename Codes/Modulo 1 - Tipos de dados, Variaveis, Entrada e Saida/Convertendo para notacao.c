#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double valor;
	
	printf("Digite um valor a ser convertido: ");
	scanf("%lf",&valor);

	system("cls");
	
	printf("Número digitado: %lf", valor);
	printf("\nEm notação científica: %E", valor);
	printf("\nEm notação científica: %e", valor);

	return 0; 
}
