#include <stdio.h>

void main(){
	//Fa�a um Programa que pe�a dois n�meros e imprima o maior deles.
	
	float n1, n2;
	printf("digite o primeiro numero: ");
	scanf("%f",&n1);
	
	printf("digite o segundo numero: ");
	scanf("%f",&n2);
	
	if(n1>n2){
		printf("numero %.2f",n1);
		printf("\ne maior do que %.2f",n2);
	}else{
		printf("o numero %.2f",n2);
		printf("\ne maior do que %.2f",n1);
	}
}
