/*Escreva um programa que contenha uma fun��o que receba um texto (com tamanho m�ximo de 350
caracteres) como par�metro e conte e retorne o n�mero de frases existentes no texto. A fun��o principal
deve mostrar na tela o valor retornado.*/


#include <stdio.h>
const int TAMANHO_TEXTO = 350;

int contarFrases(char texto[]);

int main(){
	char texto[TAMANHO_TEXTO];
    
   printf("Insira o texto (max 350 caracteres): ");
   fgets(texto, TAMANHO_TEXTO, stdin);

	printf("Numero de frases: %d", contarFrases(texto));

   return 0;
}

int contarFrases(char texto[]){
	int result = 0;
	int i = 0;
	
	while(texto[i] != '\0'){
		
		if(texto[i] == '.' || texto[i] == '!' || texto[i] == '?'){
			result++;
		}
		
		i++;
	}
	
	return result;
}
