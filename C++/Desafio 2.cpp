#include<stdio.h>
#include<stdlib.h>

//Declarar variáveis TIPO INTEIRO e armazenar 
int main ()
{
	char nome[40];
	char p[70];
	
	printf("Digite o seu nome:\n");
	scanf("%s", &nome);
	
	printf("Digite o que voce esta pensando:\n\n");
	scanf("%s", &p);
	
	printf("%s digitou: %s\n\n", nome, p);
	
	
	
	
	system ("pause");
	return(0);
}
