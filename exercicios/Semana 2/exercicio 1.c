#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Capture dois números inteiros e informe ao usuário se cada um deles é par ou não.
void main(){
	int par, impar, numero;
	setlocale(LC_ALL, "");
	
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	if(numero%2 == 0 ) // se o numero for resto zero ele vai ser par
	{
		printf("O número é par!!");
	}
	else
	{
	    printf("O número é impar!!");	 // se o numero for resto 1 ele vai ser impar
	}
}
