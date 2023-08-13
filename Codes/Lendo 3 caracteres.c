#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	char caract1, caract2, caract3;
	
	printf("Digite 3 caracteres, cada um separados por espaço\nCaracteres: ");
	scanf(" %c %c %c",&caract1, &caract2, &caract3);
	
	printf("\n\nOs caracteres digitados foram: \"%c\", \"%c\" e \"%c\"",caract1, caract2, caract3);
	
	return 0; 
}
