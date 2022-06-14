/*Escreva um programa para ajudar profissionais da �rea esportiva a calcular o valor da frequ�ncia card�aca
m�nima de treinamento para pot�ncia aer�bica. Este deve conter uma fun��o que receba por par�metro a
idade e a frequ�ncia card�aca de repouso (FCR), e calcula e retorna a frequ�ncia card�aca m�nima de
treinamento (FCT). A fun��o principal deve repetir a leitura, a chamada da fun��o e impress�o dos
resultados enquanto n�o for digitado um n�mero negativo para a idade.

Dado: FCT = FCR + 0.6 x ((220 � idade) � FCR).*/


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
