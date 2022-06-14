/* Faça um programa que contenha uma função. Essa função deve receber uma string, dois números
inteiros (representando posição inicial e posição final). A função deve construir uma substring da
string recebida por parâmetro, sendo que esta substring é o intervalo, na string original, entre os
dois valores também recebidos por parâmetro (inicial e final). Ao final a função deve imprimir na tela
esta substring construída.*/

#include <stdio.h>

void substring(char string[], int indexInicial, int indexFinal);

int main(){
	char string[40];
	int indexInicial, indexFinal;
	

	printf("Insira a string (max 40 caracteres): ");
	scanf("%s", &string);
	
	printf("Insira o indice inicial: ");
	scanf("%d", &indexInicial);
	
	printf("Insira o indice final: ");
	scanf("%d", &indexFinal);
	
	substring(string, indexInicial, indexFinal);
	
	return 0;
}

void substring(char string[], int indexInicial, int indexFinal){
	int i, j;
	int tamanhoSubString = indexFinal - indexInicial;
	char subString[tamanhoSubString];
	
	for(j = (indexInicial - 1); j < indexFinal; j++){
		subString[i] = string[j];
		i++;
	}
	
	printf("Substring: %s", subString);
	
}
