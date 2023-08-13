#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int num;
	
	printf("Digite um número inteiro: ");
	scanf("%d",&num);
	printf("\n\nValor digitado: %d", num);
	
	return 0; 
}
