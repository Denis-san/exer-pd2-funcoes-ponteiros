/*Escreva um programa que contenha uma fun��o que receba um vetor de 100 elementos e 
retorne a m�dia ponderada, onde os pesos de cada valor � dado pelo seu �ndice no vetor.*/

#include <stdio.h>
const int TAMANHO_VETOR = 100;

float calcularMediaPonderada(float valores[], int tamanhoVetor);

int main(){
	int i;
	float valores[TAMANHO_VETOR];
	
	for(i = 0; i < TAMANHO_VETOR; i++){
		
		printf("numero %d: ", (i + 1));
		scanf("%f", &valores[i]);
	}
	
	printf("Media ponderada: %.2f", calcularMediaPonderada(valores, TAMANHO_VETOR));

	return 0;	
}

float calcularMediaPonderada(float valores[], int tamanhoVetor){
	float soma, somaPesos, result;
	int i;
	
	for(i = 0; i < tamanhoVetor; i++){
		soma = soma + valores[i] * i;
		somaPesos = somaPesos + i;
	}
	
	result = (float) soma / somaPesos;
	
	return result;
	
}
