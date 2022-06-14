/*Questao 3*/
#include <stdio.h>

float converterParaMetroQuadrado(float A, char letra);

int main(){
	
	float A;
	char letra;

	printf("Insira o numero de alqueires: ");
	scanf("%f", &A);
	
	printf("Insira a letra: ");
	fflush(stdin);
	letra = getchar();
	
	printf("O valor convertido: %.2f", converterParaMetroQuadrado(A, letra));
	
	return 0;
}

float converterParaMetroQuadrado(float A, char letra){
	float result;
	float metroQuadrado;
	
	switch(letra){
		case 'P':
			metroQuadrado = 24200;
			break;
		case 'M':
			metroQuadrado = 48400;
			break;
		case 'B':
			metroQuadrado = 96800;
			break;
		default:
			break;
	}
		
	result = A * metroQuadrado;
	
	return result;
}
