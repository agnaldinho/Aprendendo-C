#include<stdio.h>
#include<locale.h>

//Capture um n�mero inteiroe exiba uma contagem regressiva at� 0.

void main(){
	setlocale(LC_ALL,"");
	int numerousuario;
	int i;
	printf("Digite um n�mero: ");
	scanf("%d",&numerousuario);
	
	for(i=numerousuario; i >= 0; i--) //i vai ser o numero de usuario, dele vai comecar contagem regressiva
	printf("%d\n",i);
	
}
