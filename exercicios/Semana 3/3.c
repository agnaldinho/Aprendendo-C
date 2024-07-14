#include <stdio.h>
#include <locale.h>

//Apresente a conversão entre centímetros para polegadas desde 0 cm até 100 cm.•Uma polegada possuiaproximadamente2,54 cm.

void main(){
	float conversao;
	int i;
	
	for(i=0; i <= 100; i++)
	{
		conversao = 1;
		conversao = 2.54 * i; //se 1 polegada vale 2,54 cm multiplica pelo i, pra descobrir contagem em cm
		printf("%d Polegada = %.2f cm\n",i, conversao);
	}
	
	
	
}
