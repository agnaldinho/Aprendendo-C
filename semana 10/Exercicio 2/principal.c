#include <stdio.h>
#include <locale.h>
#include "VetoresCalculos.h"

void main ()
{
	setlocale(LC_ALL,"");
	float vetor[5];
	int i;
	
	for(i = 0; i < 5; i++)
	{
		printf("Digite o %d� valor: ", i);
		scanf("%f",& vetor[i]);
	}
	
	printf("\nO menor Valor se encontra na posi��o %d", MenorIndice(vetor));
	printf("\nO menor valor desse vetor �: %.2f", MenorValor(vetor));
	printf("\nO maior Valor se encontra na posi��o %d", MaiorIndice(vetor));
	printf("\nO maior valor desse vetor �: %.2f", MaiorValor(vetor));
	printf("\nA m�dia dos valores desse vetor �: %.2f", Media(vetor));
	printf("\nO desvio padr�o desse vetor �: %f", DesvioPadrao(vetor));
}
