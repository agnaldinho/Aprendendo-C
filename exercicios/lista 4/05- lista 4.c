#include <stdio.h>
#include<locale.h>

void main(){
	/*Fa�a um Programa que pe�a um n�mero inteiro e determine se ele � par
    ou impar. Dica: utilize o operador m�dulo (resto da divis�o).*/
	
	setlocale(LC_ALL,"");
	int num;
	
	printf("digite um n�mero: ");
	    scanf("%d",&num);
	
	if(num%2 == 1){
		printf("esse n�mero � impar");
	}else{
		printf("esse n�mero � par");
	}
}
