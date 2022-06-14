/*Escreva um programa que contenha uma função. O programa deve ler dois valores inteiros n1 e n2 (assuma
que n1 é sempre menor que n2) e passá-los por parâmetro para a função que deve somar todos os valores
pares entre n1 e n2 (inclusive ambos, se for o caso), e retornar esta soma. A função principal deve imprimir o
resultado obtido.*/

#include <stdio.h>

int somaEntrePares(int n1, int n2);

int main(){
   
   int n1 = 0;
	int n2 = 0;
   
   printf("Insira o primeiro numero: ");
   scanf("%d", &n1);
   
	printf("Insira o segundo numero: ");
   scanf("%d", &n2);
   
   printf("%d", somaEntrePares(n1, n2));

   return 0;
}

int somaEntrePares(int n1, int n2){
	int i;
	int nPares = 0;
	
	for(i = n1; i <= n2; i++){
		if(i % 2 == 0){
			nPares = nPares + i;
		}
		
	}
	return nPares;
}
