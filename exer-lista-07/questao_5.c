/*Questao 5*/

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
