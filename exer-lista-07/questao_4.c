/*Escreva um programa que contenha uma função. A função deve receber por parâmetro dois valores
(um para comprimento e outro para largura), calcular e apresentar na tela a área de retângulos
através da fórmula do retângulo = comprimento * largura. Repetir a chamada da função com a
passagem de parâmetros enquanto não for digitado um número negativo para o comprimento ou
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
