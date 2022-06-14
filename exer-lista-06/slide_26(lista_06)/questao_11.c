/*Escreva um programa em C que contenha uma função que receba como parâmetros um caractere
representando uma operação(+, -, *, /) e dois números reais representando os operandos. Sua função deve
efetuar a operação dada sobre os operandos e retornar o resultado. A função principal deve imprimir o
resultado. (Obs: Cuidado com divisão por 0).*/

#include <stdio.h>

float operacao(char operador, float num1, float num2);

int main() {
   
   float num1, num2;
   char operador;
   
   printf("Insira o primeiro numero: ");
   scanf("%f", &num1);
   
   printf("Qual operacao (+, -, * ou /): ");
   fflush(stdin);
	operador = getchar();
	
	 printf("Insira o segundo numero: ");
   scanf("%f", &num2);
	
	printf("Resultado: %.2f", operacao(operador, num1, num2));
   
   return 0;
}

float operacao(char operador, float num1, float num2){
	
	float result = 0;
	
	switch(operador){
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 != 0) {
				result = (float) num1 / num2;
				break;	
			}
		default: 
			break;
	}
	
	return result;
}
