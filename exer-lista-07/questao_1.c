/*Escreva um programa que leia um número e contenha uma função. Esta função deve receber por
parâmetro o número verificar e retornar o valor 1 se o número for solução da equação 2x2
- 7x + 3 =
0. Caso o número não seja solução da equação, retornar o valor zero. A função principal deve
recebe o valor de retorno e imprimir uma mensagem informando se o valor é ou não solução da
equação.*/

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
