/* Fa�a uma fun��o que receba, como par�metros, um vetor de inteiros e seu tamanho, e retorne 1 se
o vetor estiver ordenado de forma crescente e 0 se n�o estiver.*/


#include <stdio.h>

int verificarOrdenacao(int valores[], int tamanho);

int main(){
	int tamanhoVetor, i;
	
	printf("insira o tamnho do vetor: ");
	scanf("%d", &tamanhoVetor);
	
	int valores[tamanhoVetor];
	
	for(i = 0; i < tamanhoVetor; i++){
		printf("Valor #%d: ", i + 1);
		scanf("%d", &valores[i]);
	}
	
	if(verificarOrdenacao(valores, tamanhoVetor) == 1){
		printf("O vetor esta ordenado!");
	}else{
		printf("O vetor NAO esta ordenado!");
	}
	
	return 0;
}

int verificarOrdenacao(int valores[], int tamanhoVetor){
	int result = 1;
	int i;
	
	for(i = 0; i < tamanhoVetor - 1; i++){
		if(valores[i] > valores[i + 1]){
			result = 0;
			break;
		}
	}
	
	return result;
}
