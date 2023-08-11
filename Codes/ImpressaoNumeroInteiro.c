//Escrever programa que leia número inteiro e imprima o número escrito

#include <stdio.h>
#include <locale.h>

int main (){
	setlocale(LC_ALL, "Portuguese");
	int num;
	printf("Digite um número inteiro: ");
	scanf("%d", &num);
	printf("\nValor lido: %d", num);
	
	return 0;
}
