/* Escreva um programa que contenha uma função que receba via parâmetro uma matriz
bidimensional MAT de valores inteiros, que seja quadrada de ordem 10 (dez). A função deve
retornar 1 se a matriz for uma matriz identidade e 0 em caso contrário. 4. Dizemos que uma matriz
quadrada é uma matriz identidade se todos os elementos que não pertencem à diagonal principal
são todos iguais a zero e todos os elementos da diagonal principal são iguais a 1.*/

#include <stdio.h>
#define ORDEM_MATRIZ_QUADRADA 3


int verificarMatrizIdentidade(int matriz[ORDEM_MATRIZ_QUADRADA][ORDEM_MATRIZ_QUADRADA], int ordem);

int main(){
	int matriz[ORDEM_MATRIZ_QUADRADA][ORDEM_MATRIZ_QUADRADA];
	int i, j;
	
	for(i = 0; i < ORDEM_MATRIZ_QUADRADA; i++){
		for(j = 0; j < ORDEM_MATRIZ_QUADRADA; j++){
			printf("Matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	printf("\n");
	
	for(i = 0; i < ORDEM_MATRIZ_QUADRADA; i++){
		for(j = 0; j < ORDEM_MATRIZ_QUADRADA; j++){
			printf("%d ", matriz[i][j]);
		}
		
		printf("\n");
	}
	
	if(verificarMatrizIdentidade(matriz, ORDEM_MATRIZ_QUADRADA) == 1){
		printf("Eh uma matriz identidade!");
	}else{
		printf("NAO Eh uma matriz identidade!");
	}
	
	return 0;
}

int verificarMatrizIdentidade(int matriz[ORDEM_MATRIZ_QUADRADA][ORDEM_MATRIZ_QUADRADA], int ordem){
	
	int i, j;
	int result = 1;
	
	for(i = 0; i < ordem; i++){
		for(j = 0; j < ordem; j++){
			if(i == j){
				if(matriz[i][j] != 1){
					result = 0;
					break;
				}
			}else{
				if(matriz[i][j] != 0){
					result = 0;
					break;
				}
			}		
		}
	}
	
	return result;
}
