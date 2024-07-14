#include <stdio.h>

//Escreva um algoritmo que gere osnúmeros de 1000 a 1999 e imprima apenasaqueles que ao serem divididospor 11 dão resto igual a 5.
void main(){
	int i;
	
	for(i=1000; i <= 1999; i++)
	{
		if(i%11 == 5) //so vai imprimir os numeros de resto da divisao for = 5
		{
			printf("%d\n", i);
		}
		
		
	}
		
	
}
