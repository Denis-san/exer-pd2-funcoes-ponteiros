/*Escreva um programa que contenha uma função que receba um texto (com tamanho máximo de 350
caracteres) como parâmetro e conte e retorne o número de frases existentes no texto. A função principal
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
