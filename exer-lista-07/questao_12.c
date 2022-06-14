/*Faça uma função para calcular x elevado a y, sendo y inteiro e não negativo.*/

#include <stdio.h>

int elevarA(int x, int y);

int main(){
	int x, y;

	printf("Insira o numero: ");
	scanf("%d", &x);
	
	printf("elevado a (numero): ");
	scanf("%d", &y);

	printf("%d elevado a %d eh %d", x, y, elevarA(x, y));

	return 0;	
}

int elevarA(int x, int y){
	int result = 1;
	int i;
	
	if(y > 0){
		for(i = 1; i <= y; i++){
			result = result * x;
			printf("opa");
		}
	}
	
	return result;
}
