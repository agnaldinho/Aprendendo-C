#include <stdio.h>
/*Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 
1,10 metro e cresce 3 centímetros por ano. Construa um  algoritmo que 
calcule  e imprima quantos anos serão necessários para que Zé seja maior que Chico.*/
void main(){
	float ze = 1.10, chico = 1.50;
	int i;
	
	for(i=0; chico > ze; i++)
	{	
		ze += 0.03;
		chico += 0.02; 
	}
	printf("Serao necessarios %d anos de idade", i);
}
