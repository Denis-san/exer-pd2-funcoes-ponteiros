/* Faça um função que receba um vetor com 10 números e informe a quantidade de ocorrências do
último número lido. Por exemplo, para a sequência 38 4 23 5 6 7 4 12 4, o resultado deve ser ‘O
número 4 apareceu 3 vezes’.*/

#include <stdio.h>

void exibirOcorrenciaDoUltimoValor(int valores[], int tamanhoVetor);

int main(){
	int tamanhoVetor, i;

	printf("insira o tamnho do vetor: ");
	scanf("%d", &tamanhoVetor);
	
	int valores[tamanhoVetor];
	
	for(i = 0; i < tamanhoVetor; i++){
		printf("Valor #%d: ", i + 1);
		scanf("%d", &valores[i]);
	}
	
	exibirOcorrenciaDoUltimoValor(valores, tamanhoVetor);
	
	return 0;
}

void exibirOcorrenciaDoUltimoValor(int valores[], int tamanhoVetor){
	int result = 0;
	int ultimoValor = valores[tamanhoVetor - 1];
	int i;
	
	for(i = 0; i < tamanhoVetor; i++){
		if(valores[i] == ultimoValor){
			result++;
		}
	}
	
	printf("O numero %d apareceu %d vezes", ultimoValor, result);
	
}
