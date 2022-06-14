/*Escreva um programa que leia duas matrizes 10x10 e passe-as para uma função que deve retornar 1 se as
matrizes são iguais e 0 em caso contrario. A função principal imprime o valor retornado.*/

#include <stdio.h>
#define TAMANHO_LINHA 10
#define TAMANHO_COLUNA 10

int main(){

	int i, j;
	int matrizA[TAMANHO_LINHA][TAMANHO_COLUNA];
	int matrizB[TAMANHO_LINHA][TAMANHO_COLUNA];
	
	printf("Matriz A:\n");
	for(i = 0; i < TAMANHO_LINHA; i++){
		for(j = 0; j < TAMANHO_COLUNA; j++){
			printf("numero: ");
			scanf("%d", &matrizA[i][j]);
		}		
	}
	
	printf("\nMatriz B:\n");
	for(i = 0; i < TAMANHO_LINHA; i++){
		for(j = 0; j < TAMANHO_COLUNA; j++){
			printf("numero: ");
			scanf("%d", &matrizB[i][j]);
		}
	}

	if(compararMatrizes(matrizA, matrizB, TAMANHO_LINHA, TAMANHO_COLUNA) == 1){
		printf("As matrizes sao iguais!");
	}else{
		printf("As matrizes NAO sao iguais!");
	}

   return 0;
}

int compararMatrizes(int matriz1[TAMANHO_LINHA][TAMANHO_COLUNA], int matriz2[TAMANHO_LINHA][TAMANHO_COLUNA], int qntLinhas, int qntColunas){
	int i, j;
	int result = 1;
	
	for(i = 0; i < qntLinhas; i++){
		for(j = 0; j < qntColunas; j++){
			if(matriz1[i][j] != matriz2[i][j]){
				result = 0;
				break;
			}		
		}
	}
	
	return result;
}
