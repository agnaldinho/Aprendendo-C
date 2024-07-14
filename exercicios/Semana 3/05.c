#include <stdio.h>
//Capture um número inteiro e exiba a tabuada dele (de 0 até 9).

void main(){
	int numero;
	int i;
	
	printf("Digite um numero: ");
	scanf("%d",&numero);
	
	for(i=0; i<=9; i++) //definindo a tabuada a ser multiplica ate o numero 9
	{
		printf("%d X %d = %d \n", i, numero, i*numero);	
	}
	
}
