#include <stdio.h>

//Capture 5dados  do  tipo  float  do  usu�rio.  Ap�s  a  captura apresente  a  m�dia  destes valores.
int main(void){
	float numerousuario[4], soma = 0;
	int i;
	
	for(i = 1; i <= 5; i++)
	{
		printf("\n%d - Digite um numero: ", i);
		scanf("%f",&numerousuario[i]);
		soma = soma + numerousuario[i];
	}
	printf("A media desses numeros �: %.2f", soma / 5);
}
