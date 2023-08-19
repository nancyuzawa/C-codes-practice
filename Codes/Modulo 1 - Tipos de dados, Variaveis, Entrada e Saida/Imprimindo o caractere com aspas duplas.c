#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char letra;
	
	printf("Digite um caractere: ");
	scanf("%c", &letra);
	
	printf("\nO caractere digitado foi: \"%c\"",letra);
	
	return 0; 
}
