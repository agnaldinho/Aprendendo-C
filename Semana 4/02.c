#include <stdio.h>

//Capture uma sequ�ncia de n�meros inteiros e exibaprimeiro os elementosem posi��espares e depois os elementos em posi��es �mpares

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
