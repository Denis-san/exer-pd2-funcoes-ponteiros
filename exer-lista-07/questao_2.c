/*Questao 2*/

#include <stdio.h>

int determinarQuadrante(int angulo);

int main(){
	int angulo;

	printf("Insira o angulo (em graus): ");
	scanf("%d", &angulo);
	
	printf("Quadrante: %d", determinarQuadrante(angulo));

	return 0;	
}

int determinarQuadrante(int angulo){
	
	if(angulo == 0 || angulo == 90 || angulo == 180 || angulo == 270 ){
		return 0;
	}
	
	if(angulo < 0 || angulo > 360){
		return -1;
	}
	
	if(angulo > 0 && angulo < 90){
		return 1;
	}
	
	if(angulo > 90 && angulo < 180){
		return 2;
	}
	
	if(angulo > 180 && angulo < 270){
		return 3;
	}
	
	if(angulo > 270 && angulo < 360){
		return 4;
	}
	
}
