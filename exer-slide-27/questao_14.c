/*Escreva um programa que contenha uma �nica fun��o de usu�rio que calcula a soma, a diferen�a e o
produto entre dois n�meros inteiros. A leitura dos dois inteiros e a impress�o dos resultados devem ser feitas
pela fun��o principal.*/

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
