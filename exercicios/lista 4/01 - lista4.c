#include <stdio.h>
#include <locale.h>

//Faça um Programa que leia três números e mostre o maior deles

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
	    printf("o maior número é: %d",maior);
	
	}
