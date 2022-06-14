/*Escreva um programa que contenha uma função que
receba um número representando uma temperatura em
graus Farenheit e calcula e imprime a temperatura em
Celsius. Obs: C=(5/9)*(F-32).*/

#include <stdio.h>

float converterParaCelsius(float f);

int main(){
	float f = 0;

	printf("Insira a temperatura em Farenheit: ");
	scanf("%f", &f);
	
	printf("Temperatura convertida para celsius: %.2f", converterParaCelsius(f));

	return 0;	
}

float converterParaCelsius(float f){
	float result = 0;
	
	result = (float)  5 / 9 * (f - 32);
	
	return result;
}
