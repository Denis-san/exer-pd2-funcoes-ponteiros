/*Escreva um programa que leia um n�mero e contenha uma fun��o. Esta fun��o deve receber por
par�metro o n�mero verificar e retornar o valor 1 se o n�mero for solu��o da equa��o 2x2
- 7x + 3 =
0. Caso o n�mero n�o seja solu��o da equa��o, retornar o valor zero. A fun��o principal deve
recebe o valor de retorno e imprimir uma mensagem informando se o valor � ou n�o solu��o da
equa��o.*/

#include <stdio.h>

int calcularEquacao(int numero);

int main(){
	int numero;

	printf("Insira o numero: ");
	scanf("%d", &numero);

	if(calcularEquacao(numero) == 1){
		printf("Esse valor eh solucao para a equacao  2x^2-7x+3!");
	}else{
		printf("Esse valor NAO eh solucao para a equacao 2x^2-7x+3!");
	}
	
	return 0;	
}


int calcularEquacao(int numero){
	int eq;
	
	eq = 2 * (numero * numero) - 7 * numero + 3;
	
	if(eq == 0){
		return 1;
	}else{
		return 0;
	}
}
