/*Escreva um programa que contenha uma única função de usuário que calcula a soma, a diferença e o
produto entre dois números inteiros. A leitura dos dois inteiros e a impressão dos resultados devem ser feitas
pela função principal.*/

#include <stdio.h>

int calcularSomaDiferencaEProduto(char operador, int num1, int num2);

int main(){
    
   int num1, num2;
   char operador;
   
   printf("Insira o primeiro numero: ");
   scanf("%d", &num1);
   
   printf("Qual operacao (+, -, * ou /): ");
   fflush(stdin);
	operador = getchar();
	
	printf("Insira o segundo numero: ");
   scanf("%d", &num2);
	
	printf("Resultado: %d", calcularSomaDiferencaEProduto(operador, num1, num2));
   

   return 0;
}


int calcularSomaDiferencaEProduto(char operador, int num1, int num2){
	
	int result = 0;
	
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
		default: 
			break;
	}
	
	return result;
}
