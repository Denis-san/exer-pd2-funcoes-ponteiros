/* Escreva um programa que contenha uma função que receba como parâmetros uma frase (com
tamanho máximo de 350 caracteres) e retorne a quantidade de vogais existentes na string. A função
principal deve imprimir o valor retornado.*/


#include <stdio.h>
const int TAMANHO_TEXTO = 350;

int contarVogais(char texto[]);

int main(){
	char texto[TAMANHO_TEXTO];
    
   printf("Insira o texto (max 350 caracteres): ");
   fgets(texto, TAMANHO_TEXTO, stdin);

	printf("Numero de vogais: %d", contarVogais(texto));

   return 0;
}

int contarVogais(char texto[]){
	int result = 0;
	int i = 0;
	
	while(texto[i] != '\0'){
		
		if(texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u'){
			result++;
		}
		
		i++;
	}
	
	return result;
}
