#include <stdio.h>
#include <locale.h>

void main(){
	/*Faça um programa que leia 5 números e informe o maior número.*/
	
	setlocale(LC_ALL,"");
	int num, maior = -9999, cont = 1;
	
	while(cont<=5){
	cont++;
	printf("digite um número: ");
	    scanf("%d",&num);
	
	if(num>maior){
		maior = num;
	    }
	}
	printf("O maior número é: %d",maior);
	
}
