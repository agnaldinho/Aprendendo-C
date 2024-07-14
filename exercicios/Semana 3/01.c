#include <stdio.h>
#include <locale.h>

//Capture um número inteiro e exiba uma contagem de 0 até ele.

void main(){
	int numerousuario;
	int i;
	
	printf("Digite um numero: ");
	scanf("%d",&numerousuario);
	
	for(i=0; i <= numerousuario; i++) //definindo i como zero que o inicio da contagem se i for menor que numero de usuario vai continuar contando
	printf("%d\n",i);
}
