#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
//Capture dois n�meros inteiros e informe ao usu�rio se cada um deles � par ou n�o.
void main(){
	int par, impar, numero;
	setlocale(LC_ALL, "");
	
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	if(numero%2 == 0 ) // se o numero for resto zero ele vai ser par
	{
		printf("O n�mero � par!!");
	}
	else
	{
	    printf("O n�mero � impar!!");	 // se o numero for resto 1 ele vai ser impar
	}
}
