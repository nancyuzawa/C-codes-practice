#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double valor;
	
	printf("Digite um valor a ser convertido: ");
	scanf("%lf",&valor);

	system("cls");
	
	printf("N�mero digitado: %lf", valor);
	printf("\nEm nota��o cient�fica: %E", valor);
	printf("\nEm nota��o cient�fica: %e", valor);

	return 0; 
}
