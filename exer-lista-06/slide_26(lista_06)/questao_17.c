/*Escreva um programa que contenha uma fun��o que receba via par�metros um vetor de valores reais e um
inteiro representando o tamanho do vetor. A fun��o deve encontrar o maior e o menor valor do vetor. A
fun��o deve somar o maior valor a todos os elementos de �ndice par e o menor valor a todos os elementos
de �ndice �mpar. A fun��o principal deve imprimir o maior e o menor valor encontrados pela fun��o e o vetor
alterado.*/

#include <stdio.h>

float *somarMaiorPorParMenorPorImpar(float valores[], int tamanhoVetor);
float encontrarMaiorValor(float valores[], int tamanhoVetor);
float encontrarMenorValor(float valores[], int tamanhoVetor);

int main(){
	int tamanhoVetor = 0;
	int i;
	float *ptResult;
	
	printf("quantidade de numeros: ");
	scanf("%d", &tamanhoVetor);
	
	float valores[tamanhoVetor];
	
	for(i = 0; i < tamanhoVetor; i++){
		printf("valor indice %d: ", i);
		scanf("%f", &valores[i]);
	}

	printf("Maior valor: %f\n", encontrarMaiorValor(valores, tamanhoVetor));
	printf("Menor valor: %f\n", encontrarMenorValor(valores, tamanhoVetor));
	
	ptResult = somarMaiorPorParMenorPorImpar(valores, tamanhoVetor);
	
	printf("Matriz alterada: \n");
	for(i = 0; i < tamanhoVetor; i++){
		printf("%f ", ptResult[i]);
	}
	
   return 0;
}

float encontrarMenorValor(float valores[], int tamanhoVetor){
	float menorValor = valores[0];
	int i;
	
	for(i = 0; i < tamanhoVetor; i++){
		if(valores[i] < menorValor){
			menorValor = valores[i];
		}
	}
	
	return menorValor;
}

float encontrarMaiorValor(float valores[], int tamanhoVetor){
	float maiorValor = 0;
	int i;
	
	for(i = 0; i < tamanhoVetor; i++){
		if(valores[i] > maiorValor){
			maiorValor = valores[i];
		}
	}
	
	return maiorValor;
}

float *somarMaiorPorParMenorPorImpar(float valores[], int tamanhoVetor){
	
	float *ponteiroToResult = valores;  
	int i;
	float menorValor = encontrarMenorValor(valores, tamanhoVetor);
	float maiorValor = encontrarMaiorValor(valores, tamanhoVetor);
	
	for(i = 0; i < tamanhoVetor; i++){
		if(i % 2 == 0){
			valores[i] = valores[i] + maiorValor;
		}else{
			valores[i] = valores[i] + menorValor;
		}
	}
	
	return ponteiroToResult;
}
