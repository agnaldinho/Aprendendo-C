#include <stdio.h>
#include <locale.h>

void main(){
	/*Fa�a um programa que leia 5 n�meros e informe o maior n�mero.*/
	
	setlocale(LC_ALL,"");
	int num, maior = -9999, cont = 1;
	
	while(cont<=5){
	cont++;
	printf("digite um n�mero: ");
	    scanf("%d",&num);
	
	if(num>maior){
		maior = num;
	    }
	}
	printf("O maior n�mero �: %d",maior);
	
}
