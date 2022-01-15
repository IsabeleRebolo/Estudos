#include<stdio.h>
#include<stdlib.h>

//Escolher operacao e realizar conta

int main (void)
{
	int valor1, valor2, operacao;
	int resp_soma, resp_subtracao, resp_multiplicacao, resp_divisao;
	
	printf("Digite a operação que deseja fazer:\n 1 Soma \n 2 Subtracao\n 3 Divisao \n 4 Multiplicacao\n" );
	scanf("%d", &operacao);
	
	printf("Digite o valor do primeiro numero");
	scanf("%d", &valor1);
	
	printf("Digite o valor do segundo numero");
	scanf("%d", &valor2);
	
	
	// Para soma 
	resp_soma = valor1 + valor2;
	if (operacao = 1){
			printf("\nSoma =%d, resp_soma");
	
	}

	
	// 	Para subtracao 
	resp_subtracao = valor1 - valor2;
	if (operacao = 2){
		printf("\nSubtracao =%d, resp_subtracao");

	}
	
	// Para divisao
		resp_divisao = valor1/valor2;
	if (operacao = 3){
			printf("\nDivisao =%d, resp_divisao");
	
	}
	

	
	// Para multiplicacao
	resp_multiplicacao = valor1 * valor2;
	if (operacao =4){
			printf("\nMultiplicacao =%d, resp_multiplicacao");

	}
	

	
	system ("pause");
	return(0);
}
