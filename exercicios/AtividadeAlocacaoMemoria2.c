#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void PreencherVetor(float *notas, int Quantidade);
void MostrarVetor(float *notas, int Quantidade);
void MaiorNota(float *notas, int Quantidade);

int QuantidadeNotas;

int main()
{	
	setlocale(LC_ALL, "Portuguese");
	
	float *notas;
	printf("Digite a quantidades de notas: ");
	scanf("%d",&QuantidadeNotas);
	
	notas = (float *) malloc (QuantidadeNotas*sizeof(int));
	
	PreencherVetor(notas, QuantidadeNotas);
	MostrarVetor(notas, QuantidadeNotas);
	MaiorNota(notas, QuantidadeNotas);
	
	free(notas);
	
	getch();
}
void PreencherVetor(float *notas, int Quantidade) 
{
    int i;
    for (i =0; i < QuantidadeNotas; i++) 
	{
		printf("Digite a nota: ");
		scanf("%f", notas+i);
	}
}

void MaiorNota(float *notas, int Quantidade)
{
	int i;
	float maior = 0, menor = 999;
	
	for(i = 0; i < QuantidadeNotas; i++)
	{
		if(maior < *(notas+i))
		{
			maior = *(notas + i);
		}
    		
    	else if(menor > *(notas+i))
		{
			menor = *(notas+i);
		}
    		
	}
	
	printf("\nMaior Nota: %.2f", maior);
	printf("\nMenor Nota: %.2f", menor);
}

void MostrarVetor(float *notas, int Quantidade) {
    float soma=0, media;
    int i;
    
    printf("\n\n=-=-=-=-Resultados-=-=-=-=\n\n");
    for (i =0; i < QuantidadeNotas; i++) 
	{
		printf("Endereco: %d, nota: %.2f\n",notas+i,*(notas+i));
		soma+= *(notas+i);
	}
	media=soma/QuantidadeNotas; 
	printf("\n\nMédia das notas: %.2f", media);
	
}

