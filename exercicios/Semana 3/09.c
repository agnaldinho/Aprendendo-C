#include <stdio.h>

//Capture  um  n�mero  do  usu�rio  e  mostra  a  ela  a  soma  de  todos  os  n�meros  at� o n�mero digitado.
void main(){
	int numero, soma;
	int i;
	
	printf("Digite 0 quando finalizar");
	do
	{
		i++;
		printf("\nDigite um numero: ");
		scanf("%d",&numero);
		soma = soma + numero; //fazendo a soma de todas os numeros digitados
		
	}while(numero != 0);
	
	printf("A soma de todos os numeros digitados e: %d", soma);
	
	
	
}
