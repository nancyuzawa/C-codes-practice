//Escrever programa que leia n�mero inteiro e imprima o n�mero escrito

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um n�mero inteiro: ");
	scanf("%d", &num);
	printf("\nValor lido: %d", num);
	
	return 0;
}
