#include <stdio.h>
#include <locale.h>

void main(){
	/*Faça um programa que pergunte o preço de três produtos e informe qual
    produto você deve comprar, sabendo que a decisão é sempre pelo mais
    barato.*/
	float prod, cont = 1, barato = 9999;
	while(cont<4){
		setlocale(LC_ALL,"");
	     cont++;
		printf("digite o valor da compra: ");
		    scanf("%f",&prod);
		if(prod<barato){
			barato = prod;
		}	
	}
	printf("O produto mais barato é de $ %.2f reais ",barato);
}
