#include <stdio.h>
#include <locale.h>
#include "Primos.h"

int main()
{
	setlocale(LC_ALL,"");
	int num;
	
	printf("digite um número: ");
	scanf("%d",&num);
	
	printf("\nO módulo de %d é %d", -num, Modulo(-num));
	printf("\nO número %d é primo? %c", num, Primo(num));
	printf("\nO primeiro dígito da esquerda do número %d é %d", num, PrimeiroDigito(num));
}
