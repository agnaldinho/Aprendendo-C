#include <stdio.h>
/*Codifique  um  programa  para ler  uma  matriz  quadrada  (quantidade  de  linhas  = quantidade de colunas) 
de ordem ne exibir apenas os elementos da diagonalprincipal.*/
int main(void){
	
	//variavel
	int matriz[3][3];
	int i, j;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
		{
			printf("\nValor %d,%d: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
		
		printf("\nElementos na diagonal principal: \n");
		
		//verificando que está na diagnonal principal.
		
		for(i = 0; i < 3; i++)
			for(j = 0; j < 3; j++)
			{
				if(i == j)
				{
					printf("%d, ", matriz[i][j]);
					
				}
				
			}
			return 0;
	
}


