#include <stdio.h>
#include <locale.h>
#include "Primos.h"

int main()
{
	setlocale(LC_ALL,"");
	int num;
	
	printf("digite um n�mero: ");
	scanf("%d",&num);
	
	printf("\nO m�dulo de %d � %d", -num, Modulo(-num));
	printf("\nO n�mero %d � primo? %c", num, Primo(num));
	printf("\nO primeiro d�gito da esquerda do n�mero %d � %d", num, PrimeiroDigito(num));
}
