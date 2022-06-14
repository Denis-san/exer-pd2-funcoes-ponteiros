/*Escreva um programa que contenha uma função que receba uma matriz 3x3 e um número y e calcule o
produto escalar de y pela própria matriz. A função deve alterar a matriz original.*/

#include <stdio.h>
#define TAMANHO_LINHA 3
#define TAMANHO_COLUNA 3

void calcularProdutoEscalar(int mat[TAMANHO_LINHA][TAMANHO_COLUNA], int linhas, int colunas, float nEscalar);

int main(){

	int i, j;
	int matriz[TAMANHO_LINHA][TAMANHO_COLUNA];
	float nEscalar;
	
	for(i = 0; i < TAMANHO_LINHA; i++){
		for(j = 0; j < TAMANHO_COLUNA; j++){
			printf("numero: ");
			scanf("%d", &matriz[i][j]);
		}		
	}
	
	printf("Numero escalar: ");
	scanf("%f", &nEscalar);
	
	calcularProdutoEscalar(matriz, TAMANHO_LINHA, TAMANHO_COLUNA, nEscalar);
	
	for (i = 0; i < TAMANHO_LINHA; i++){
		for (j = 0; j < TAMANHO_COLUNA; j++){
			printf("matriz[%d][%d]=%d\n", i, j, matriz[i][j]);
		}
	}
	
   return 0;
}


void calcularProdutoEscalar(int mat[TAMANHO_LINHA][TAMANHO_COLUNA], int linhas, int colunas, float nEscalar){
	int i, j;

	for (i = 0; i < linhas; i++){
		for (j=0; j < colunas; j++){
			mat[i][j] = mat[i][j] * nEscalar;
		}
	}

}
