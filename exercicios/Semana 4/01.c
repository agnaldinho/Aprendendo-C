#include <stdio.h>

//Capture uma sequência de números inteiros e exiba-os em ordem inversa.

void main(){
	
	int numero[5];
	int contador;
	
	for(contador = 0; contador < 5; contador++ )
	{
		printf("Entre com um numero: ");
		scanf("%d", &numero[contador]);
	}
	for(contador = 4; contador >= 0; contador--)
		printf("\nO numero da posicao %d = %d",
		contador, numero[contador]);
}
