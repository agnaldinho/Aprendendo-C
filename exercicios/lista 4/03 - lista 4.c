#include <stdio.h>
#include <locale.h>

void main(){
	/*Fa�a um programa que pergunte o pre�o de tr�s produtos e informe qual
    produto voc� deve comprar, sabendo que a decis�o � sempre pelo mais
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
	printf("O produto mais barato � de $ %.2f reais ",barato);
}
