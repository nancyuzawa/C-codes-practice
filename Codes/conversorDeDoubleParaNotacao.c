//ler um valor double e imprimir em nota��o cient�fica

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	double valor;
	printf("Digite um valor: ");
	scanf("%lf", &valor);
	printf("\n\nEm nota��o cient�cica: %E", valor);
	return 0;
}
