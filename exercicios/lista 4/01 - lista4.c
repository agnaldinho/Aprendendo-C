#include <stdio.h>
#include <locale.h>

//Fa�a um Programa que leia tr�s n�meros e mostre o maior deles

void main(){
	setlocale(LC_ALL,"");
	int contador = 1, num, maior = -9999;
	
	while(contador<=5){
		contador++;
		printf("digite um numero: ");
		scanf("%d",&num);
		if(num>maior){
		    maior = num;
		}		
	}
	    printf("o maior n�mero �: %d",maior);
	
	}
