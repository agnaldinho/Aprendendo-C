#include <stdio.h>
#include <locale.h>

/* 
	Faça um algoritmo que construa uma matriz de nome MAT de 5 linhas por 8 colunas
	contendo números inteiros. Em seguida escreva a soma dos elementos de cada linha e
	se a soma dos elementos é par ou ímpar. Por fim escreva a soma dos elementos de cada
	coluna e se a soma dos elementos é par ou ímpar
*/


int main (void)
{
	setlocale(LC_ALL,"");
	
	int i,j;
	int MAT[5][8];
	int vet1[5]={0};
	
	for( i = 0 ; i < 5 ; i ++)
	{
		for(j =0 ; j <8 ; j++)
		{
			MAT[i][j] = 1; 
		}
	}
	
	
	for( i = 0 ; i < 5 ; i ++)
	{
		for(j =0 ; j <8 ; j++)
		{
			switch(i)
			{
				case 0:
					vet1[0]+=MAT[i][j];
					break;
				case 1:
					vet1[1]+=MAT[i][j];
					break;
				case 2:
					vet1[2]+=MAT[i][j];
					break;
				case 3:
					vet1[3]+=MAT[i][j];
					break;
				case 4:
					vet1[4]+=MAT[i][j];	
					break;	
			}
		}
	}
	
	for( i = 0 ; i < 5 ; i ++)
	{
		printf("A soma da %iº linha da matriz é : %i  - ",i+1,vet1[i]);
		if(vet1[i] %2 == 0)
		{
			printf("par \n");
		}
		else
		{
			printf("impar \n");
		}
	}
	
	
}
