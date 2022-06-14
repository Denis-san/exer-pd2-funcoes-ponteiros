/*Escreva um programa para ajudar profissionais da área esportiva a calcular o valor da frequência cardíaca
mínima de treinamento para potência aeróbica. Este deve conter uma função que receba por parâmetro a
idade e a frequência cardíaca de repouso (FCR), e calcula e retorna a frequência cardíaca mínima de
treinamento (FCT). A função principal deve repetir a leitura, a chamada da função e impressão dos
resultados enquanto não for digitado um número negativo para a idade.

Dado: FCT = FCR + 0.6 x ((220 – idade) – FCR).*/


#include <stdio.h>

float calcularFrequenciaCardiaMinima(int idade, float fcr);

int main(){
    
    int idade = 0;
    float fcr = 0;
    
    do{
    	printf("Insira a idade: ");
    	scanf("%d", &idade);
    	
    	if(idade > 0){
    		
			printf("Insira a frequencia cardiaca de repouso (FCR): ");
    		scanf("%d", &fcr);
    		
    		printf("%.2f\n\n", calcularFrequenciaCardiaMinima(idade, fcr));
    		
		}
    	
	 }while(idade > 0);

    return 0;
}

float calcularFrequenciaCardiaMinima(int idade, float fcr){
	float fct = 0;
	
	fct = (float) fcr + 0.6 * ((220 - idade) - fcr);
	
	return fct;
}
