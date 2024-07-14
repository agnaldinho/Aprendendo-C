#include<stdio.h>
#include<locale.h>

//Capture um número inteiroe exiba uma contagem regressiva até 0.

void main(){
	setlocale(LC_ALL,"");
	int numerousuario;
	int i;
	printf("Digite um número: ");
	scanf("%d",&numerousuario);
	
	for(i=numerousuario; i >= 0; i--) //i vai ser o numero de usuario, dele vai comecar contagem regressiva
	printf("%d\n",i);
	
}
