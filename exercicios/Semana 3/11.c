#include <stdio.h>
//Escreva um algoritmo que calcule a média dos números digitados pelo usuário, se eles forem pares. Termine a leitura se o usuário digitar zero (0).

void main(){
	int numero, soma, i = -1;
	
	do
	{
		i = i + 1;
		printf("Digite um numero: ");
		scanf("%d",&numero);
		if(numero %2 == 0 ) // Fazer a soma so se for numero positivo
		soma = soma + numero;
		else
		{
		printf("Numero incorreto, digite numeros pares: "); // se ele for incorreto, ele passa por aqui e pede outro numero
		scanf("%d",&numero);
		}
		
		
		
	}while(numero != 0); //quando digitar zero, vai encerrar
	
	printf("A media desses numeros é: %d", soma/i);
	
	
	
}
