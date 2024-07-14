#include <stdio.h>

//Capture uma sequência de números inteiros e exibaprimeiro os elementosem posiçõespares e depois os elementos em posições ímpares

void main(){
	int numeros[5], par, impar;
	int i;
	
	for(i = 0; i < 4; i++)
	{
		printf("Entre com um numero: ");
			scanf("%d",&numeros[i]);
	}
	
	for(i = 0 ; i < 4; i++)
	{
		if(numeros[i]%2 == 0)
			printf("\nNumeros pares: %d",numeros[i]);
	}
	for(i = 0 ; i < 4; i++)
	{
		if(numeros[i]%2 == 1)
		{
			printf("\nNumeros impares: %d",numeros[i]);
		}
		
	}
} 
