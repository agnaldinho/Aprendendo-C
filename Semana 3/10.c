#include <stdio.h>
/*Chico tem 1,50 metro e cresce 2 cent�metros por ano, enquanto Z� tem 
1,10 metro e cresce 3 cent�metros por ano. Construa um  algoritmo que 
calcule  e imprima quantos anos ser�o necess�rios para que Z� seja maior que Chico.*/
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
