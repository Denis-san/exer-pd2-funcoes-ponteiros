#include <stdio.h>

int main(){
	
	float melhorTempo;
	float somaVoltas = 0;
	int i; 
	int melhorVolta = 0; 
	int nVoltas = 0; 

	printf("Insira o quantidade de voltas: ");
	scanf("%d", &nVoltas);
	
	float voltas[nVoltas];
	
	for(i = 0; i < nVoltas; i++){
		printf("Insira o tempo da volta #%d: ", (i + 1));
		scanf("%f", &voltas[i]);
	}
	
	melhorTempo = voltas[0];
	
	for(i = 0; i < nVoltas; i++){
		
		if(melhorTempo > voltas[i]){
			melhorTempo = voltas[i];
			melhorVolta = i;
		}
		
		somaVoltas = somaVoltas + voltas[i];
	}
	
	printf("Melhor tempo: %.2f\n", melhorTempo);
	printf("Melhor volta: %d\n", (melhorVolta + 1));	
	printf("Tempo medio: %.2f\n", (somaVoltas / nVoltas));
	
	
	return 0;
}


