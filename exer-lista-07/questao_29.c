/* Fa�a um programa que contenha uma fun��o. Essa fun��o deve receber uma string, dois n�meros
inteiros (representando posi��o inicial e posi��o final). A fun��o deve construir uma substring da
string recebida por par�metro, sendo que esta substring � o intervalo, na string original, entre os
dois valores tamb�m recebidos por par�metro (inicial e final). Ao final a fun��o deve imprimir na tela
esta substring constru�da.*/

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
