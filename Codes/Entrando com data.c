#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int dia, mes, ano;
	
	printf("Digite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mês: ");
	scanf("%d", &mes);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	
	printf("\nData: %d-%d-%d", dia, mes, ano);
	
	return 0; 
}
