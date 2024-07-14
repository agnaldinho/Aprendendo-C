#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

/*Ao vender DVD’s para gravação, a sua loja consegue vender a R$ 0,50 para quem compre até  100  unidades  e  
a  R$  0,45  para  quem  compra  acima  de  100  unidades.  Capture  a quantidade DVD’s que o usuário quer comprar e informe a ele 
o valor do custo total. */
void main(){
	int dvd;
	float valor;
	setlocale(LC_ALL,"");
	printf("Digite a quantidade de DVD's que ira comprar:  ");
	scanf("%d",&dvd);
	
	if(dvd <= 100) // se o valor for menor e igual a 100 pego quantidade do dvd e multiplico por 0,45
	{
		valor = dvd * 0.45; 
	}
	else if(dvd > 100) // a mesma coisa se for maior que 100 pega a quantidade de dvd e multiplico por 0,5
	{ 
		valor = dvd * 0.5;
	}
	printf("O valor total dos DVD's é %.2f", valor); // o valor do resultado
	
}
