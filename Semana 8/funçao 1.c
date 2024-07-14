#include <stdio.h>

int EncontrarFilialMenorRendimento( float rendimentos[5] )
{
	int indice_MenorRendimento;
	float MenorRendimento;
	
	int i;	
	
	MenorRendimento = rendimentos[4];
	
	for(i = 0; i < 5; i++)
	{
		if(rendimentos[i] < MenorRendimento)
		{
			MenorRendimento = rendimentos[i];
			indice_MenorRendimento = i;
		}
	}
	
	
	return indice_MenorRendimento;

}

int EncontrarFilialMaiorRendimento( float rendimentos[5] )
{
	int indice_MaiorRendimento;
	float MaiorRendimento;
	
	int i;	
	
	MaiorRendimento = rendimentos[4];
	
	for(i = 0; i < 5; i++)
	{
		if(rendimentos[i] > MaiorRendimento)
		{
			MaiorRendimento = rendimentos[i];
			indice_MaiorRendimento = i;
		}
	}
	
	
	return indice_MaiorRendimento;

}

float EncontrarMediaMensalLucro( float rendimentos[5] )
{
	
}

float DiferencaRendimentoExtremos( float rendimentos[5] )
{
	diferenca = EncontrarFilialMaior - EncontrarFilialMenor;
}


int main()
{
	float rendimentos[5];
	int i;
	int menorFilial;
	
	for(i = 0; i < 5; i++)
	{
		printf("Entre com o rendimento da filial %d: ", i);
		scanf("%f", &rendimentos[i]);
	}
	
	menorFilial = EncontrarFilialMenorRendimento(rendimentos);
	
	printf("\nA filial com pior rendimento eh a: %d", menorFilial);
	printf("\nA filial com melhor rendimento eh a: %d", EncontrarFilialMaiorRendimento(rendimentos));
	printf("\nA media dos rendimentos eh: %f", EncontrarMediaMensalLucro(rendimentos));
	printf("\nO gap dos rendimentos eh: %f", DiferencaRendimentoExtremos(rendimentos));	
	
	return 0;
}
