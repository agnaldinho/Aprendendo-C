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
		printf("Digite o %dº valor: ", i);
		scanf("%f",& vetor[i]);
	}
	
	printf("\nO menor Valor se encontra na posição %d", MenorIndice(vetor));
	printf("\nO menor valor desse vetor é: %.2f", MenorValor(vetor));
	printf("\nO maior Valor se encontra na posição %d", MaiorIndice(vetor));
	printf("\nO maior valor desse vetor é: %.2f", MaiorValor(vetor));
	printf("\nA média dos valores desse vetor é: %.2f", Media(vetor));
	printf("\nO desvio padrão desse vetor é: %f", DesvioPadrao(vetor));
}
