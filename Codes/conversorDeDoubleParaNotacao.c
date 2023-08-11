//ler um valor double e imprimir em notação científica

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double valor;
	printf("Digite um valor: ");
	scanf("%lf", &valor);
	printf("\n\nEm notação cientícica: %E", valor);
	return 0;
}
