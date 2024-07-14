#include <stdio.h>
#include <locale.h>


int main(void)
{
	
	setlocale(LC_ALL,"");
	
	//Ex: 10
	
	float mat[3][6];
	
	float somaColunaImpar = 0,somaColunaUm = 0, somaColunaDois = 0, somaColunaQuatro = 0;
	float mediaColunaDois, mediaColunaQuatro;
	float colunaUmMaisDois[3];
	int x, i, j;
	
	printf("Digite os valores da matriz:\n"); 
	for(i=0; i<3; i++)
	{
		for(j=0; j<6; j++)
		{
			printf("[%d][%d] - ",i,j);
			scanf("%f", &mat[i][j]);
		}
		printf("\n");
	}
	
	for(i=0; i<3; i++)
	{
		for(j=0; j<6; j++)
		{
			//Se coluna for da posição 1 some com a proxima da mesma posição
			if(j == 1)
			{ 
				somaColunaDois += mat[i][j];   
			}
			
			//Se coluna for da posição 3 some com a proxima da mesma posição
			if(j == 3)
			{
				somaColunaQuatro += mat[i][j]; 
			}
			
			// Contabilizando a soma dos elementos das colunas impares
			if(j % 2 != 0)
			{
				somaColunaImpar += mat[i][j];   //Se coluna for impar some com a proxima da mesma posição
			}
		}
	}	
			
	mediaColunaDois = somaColunaDois / 3;    
	mediaColunaQuatro = somaColunaQuatro / 3;
	
	printf("a soma dos elementos das culunas impares é: %.2f",somaColunaImpar);
	printf("\nA media aritimética dos elementos da segunda coluna é: %.2f",mediaColunaDois);
	printf("\nA media aritimética dos elementos da quarta coluna é: %.2f",mediaColunaQuatro);
	printf("\n\n");
	
	// Atribuindo os valores da coluna 1 e 2 para a coluna 6
	for(i = 0; i < 3; i++)
		mat[i][5] = mat[i][0] + mat[i][1];
	
	//imprimindo matriz modificada
	printf("Matriz já modificada: \n");
	for(i=0; i<3; i++)
	{
		for(j=0; j<6; j++)
		{
			printf("%.2f ",mat[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
