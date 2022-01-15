#include<stdio.h>
#include<stdlib.h>

//Escolher operacao e realizar conta

int main (void)
{
	int valor1, valor2, operacao;
	int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
	char oper;
	
	do
	{
	
	printf ("Digite a operacao que deseja fazer:\n");
	printf ("'1': Soma\n");
	printf ("'2': Subtracao\n");
	printf ("'3': Divisao\n");
	printf ("'4': Multiplicacao\n");
	scanf("%c",&oper);
	
	
	printf("Digite o valor do primeiro numero\n");
	scanf("%d", &valor1);
	
	printf("Digite o valor do segundo numero\n");
	scanf("%d", &valor2);
	
		
	
	switch (oper)
	// Para soma 
	{
		case '1':
		resp_soma = valor1 + valor2;
			printf("Soma: %d\n", resp_soma);
			break;
			
			

		case '2':
			resp_subtracao = valor1 - valor2;
		printf("Subtracao: %d\n", resp_subtracao);
		break;
		
		
		case '3': 
		resp_divisao = valor1/valor2;
			printf("Divisao: %d\n", resp_divisao);
			break;
			
		case '4':
			resp_multiplicacao = valor1 * valor2;
			printf("Multiplicacao: %d\n", resp_multiplicacao);
			break;
	
	default:
		if (valor1 != 0 && valor2 != 0)
		printf("valor invalido\n"); 
		else
		printf("Fechando a calculador\n");
		
	}
	

		
	}while(valor1!=0 && valor2!=0);
	
}
	

