/*Escreva um programa que contenha uma fun��o. A fun��o deve receber por par�metro dois valores
(um para comprimento e outro para largura), calcular e apresentar na tela a �rea de ret�ngulos
atrav�s da f�rmula do ret�ngulo = comprimento * largura. Repetir a chamada da fun��o com a
passagem de par�metros enquanto n�o for digitado um n�mero negativo para o comprimento ou
para a largura.*/

#include <stdio.h>

float calcularAreaRetangulo(float comprimento, float largura);

int main(){
	float comprimento, largura;

	do{
		printf("Insira o comprimento: ");
		fflush(stdin);
		scanf("%f", &comprimento);
	}while(comprimento < 0);
	
	do{
		printf("Insira a largura: ");
		fflush(stdin);
		scanf("%f", &largura);
	}while(largura < 0);
	
	printf("Area do retangulo: %.2f", calcularAreaRetangulo(comprimento, largura));
	
	return 0;
}

float calcularAreaRetangulo(float comprimento, float largura){
	return comprimento * largura;
}
