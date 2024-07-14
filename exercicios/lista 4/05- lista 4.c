#include <stdio.h>
#include<locale.h>

void main(){
	/*Faça um Programa que peça um número inteiro e determine se ele é par
    ou impar. Dica: utilize o operador módulo (resto da divisão).*/
	
	setlocale(LC_ALL,"");
	int num;
	
	printf("digite um número: ");
	    scanf("%d",&num);
	
	if(num%2 == 1){
		printf("esse número é impar");
	}else{
		printf("esse número é par");
	}
}
