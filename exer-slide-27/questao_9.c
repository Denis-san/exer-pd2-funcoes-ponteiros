/*Escreva um programa que contenha uma fun��o que
receba dois n�meros e retorne verdadeiro (1) ou falso (0)
indicando se o primeiro n�mero � divis�vel pelo segundo.
A fun��o principal deve imprimir uma mensagem
apropriada de acordo com o resultado da fun��o.*/

#include <stdio.h>


int ehDivisivelPor(int num1, int num2);

int main(){
	int num1, num2;
	
	printf("Insira o primeiro numero: ");
	scanf("%d", &num1);
	
	printf("Insira o segundo numero: ");
	scanf("%d", &num2);
	
	if(ehDivisivelPor(num1, num2) == 1){
		printf("%d eh divisivel por %d", num1, num2);
	}else{
		printf("%d NAO eh divisivel por %d", num1, num2);
	}

	return 0;	
}

int ehDivisivelPor(int num1, int num2){
	
	if(num1 % num2 == 0){
		return 1;
	}else{
		return 0;
	}
	
}

