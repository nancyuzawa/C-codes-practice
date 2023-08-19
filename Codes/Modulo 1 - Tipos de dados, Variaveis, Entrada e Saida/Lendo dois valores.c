//Lendo dois valores do tipo 'char' usando um único comando de leitura

#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char valor1, valor2;
	
	printf("Digite 2 caracteres separados por espaço\n\nCaracteres: ");
	scanf("%c %c",&valor1,&valor2);
	printf("\n\nCaracteres digitados: '%c', '%c'", valor1, valor2);
	
	return 0; 
}
