#include <stdio.h>
#include <locale.h>

int LampadasNecessarias(int metrosQuadrados[4] )
{
	int i=0,f;
	int iluminacaometros=0;
	int lampada=0;
	
	for(i = 0; i < 4 ; i++)
	{
		switch(i)
		{
			case 0:
				iluminacaometros+=metrosQuadrados[0]*80;
				break;
			case 1:
				iluminacaometros+=metrosQuadrados[1]*100;
				break;
			case 2:
				iluminacaometros+=metrosQuadrados[2]*120;
				break;
			case 3:
				iluminacaometros+=metrosQuadrados[3]*150;
				break;
		}
	}
	
	f= iluminacaometros;
	
	while(f > 0)
	{
		lampada++;
		f-=810;
	}
	
	return lampada;
}

float CustoMensal(int vlampada)
{
	float wats;
	float custo;
	
	wats = vlampada *  60; // Quantidade de lampadas x Wats de uma lampada Incandescente

	wats = wats / 1000; // Transformando wats em Kw

	wats = 0.28551 * wats;
	
	wats = wats * 720;
	
	custo = wats;
	
	return custo;
		
}

float CustoLed(int vlampada)
{
	float wats;
	float custoled;
	
	
	wats = vlampada *  10; // Quantidade de lampadas x Wats de uma lampada LED

	wats = wats / 1000; // Transformando wats em Kw

	wats = 0.28551 * wats;

	wats = wats * 720;

	custoled = wats;
	
	return custoled;
}

float DiferencaValor(float custoIncan, float custoLed)
{
	float diferenca;
	
	diferenca = custoIncan - custoLed;
	
	return diferenca;
}

float PrecoIncan (int vlampada)
{
	float vpreco;
	vpreco = vlampada * 1.50;
	
	return vpreco;
}

float PrecoLed (int vlampada)
{
	float preco;
	preco = vlampada * 15.00;
	
	return preco;
}

int PagarDiferenca(float precoLanLed, float precoLanIncan, float diferencas )
{
	int meses=0;
	float i=0;
	
	for( i = precoLanLed; i > precoLanIncan; i -= diferencas)
	{
		meses ++;	
	}
	
	return meses;
}


int main ()
{
	setlocale (LC_ALL,"portuguese");
	
	
	int metragem[4];
	int i=0;
	int vlampada=0;
	float custoLed=0;
	float custoIncan=0;
	float precoLanLed = 0;
	float precoLanIncan = 0;
	float diferencas = 0;
	
	printf(" 0 - Quarto \n 1 - Sala \n 2 - Escritório \n 3 - Ambiente Aberto");
	printf("\n Nos informe a quantidade em metros dos comodos da sua casa:");
	
	for(i = 0; i <4 ; i++)
	{
		printf("\n %i :  ",i);
		scanf("%i",&metragem[i]);
	}
	
	printf("A quantidade de lâmpadas necessárias é: %i ",LampadasNecessarias(metragem));
	
	
	vlampada = LampadasNecessarias(metragem);
	
	custoIncan = CustoMensal(vlampada);
	custoLed =  CustoLed(vlampada);
	diferencas = DiferencaValor(custoIncan,custoLed);
	
	printf("\n Estimativa de custo mensal, lampada Incandescente: %.2f",custoIncan);
	
	printf("\n Estimativa de custo mensal, lampada LED: %.2f",custoLed);
	
	printf("\n Utilizando lampâdas LED, você economizará por mês: %.2f",diferencas);
	
	precoLanLed = PrecoLed(vlampada);
	precoLanIncan = PrecoIncan(vlampada);
	
	printf("\n Mesês para pagar a diferença da nova tecnologia LED: %i",PagarDiferenca(precoLanLed,precoLanIncan,diferencas));
	
	
	return 0;
}
