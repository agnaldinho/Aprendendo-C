#include "VetoresCalculos.h"
#include <math.h>

int MenorIndice(float vetor[5])
{
	float menor_valor = vetor[0];
	int menor_indice = 0;
	int i;
	
	for(i = 1; i < 5; i++)
		if(vetor[i] < menor_valor)
		{
			menor_valor = vetor[i];
			menor_indice = i;
		}
	
	return menor_indice;
}

float MenorValor(float vetor[5])
{
	float menor_valor = vetor[0];
	int i;
	
	for(i = 1; i < 5; i++)
		if(vetor[i] < menor_valor)
			menor_valor = vetor[i];
	
	return menor_valor;
}

int MaiorIndice(float vetor[5])
{
	float maior_valor = vetor[0];
	int maior_indice = 0;
	int i;
	
	for(i = 1; i < 5; i++)
		if(vetor[i] > maior_valor)
		{
			maior_valor = vetor[i];
			maior_indice = i;
		}
	
	return maior_indice; 
}

float MaiorValor(float vetor[5])
{
	float maior_valor = vetor[0];
	int i;
	
	for(i = 1; i < 5; i++)
		if(vetor[i] > maior_valor)
			maior_valor = vetor[i];
	
	return maior_valor; 
}

float Media(float vetor[5])
{
	float media = 0;
	int i;
	
	for(i = 0; i < 5; i++)
		media += vetor[i];
	media /= i;
	
	return media;
}

float DesvioPadrao(float vetor[5])
{
	float desvio_padrao;
	float media = Media(vetor);
	int i;
	
	for(i = 0; i < 5; i++)
		desvio_padrao += (vetor[i] - media) * (vetor[i] - media);
	desvio_padrao /= i;
	desvio_padrao = sqrt(desvio_padrao);
	
	return desvio_padrao;
}
