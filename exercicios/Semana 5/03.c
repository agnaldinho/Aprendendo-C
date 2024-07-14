#include <stdio.h>

/*Crie uma matriz 5x5 e preencha a diagonal principalcom 1 e os demais elementos com 0. Depois apresente esta matriz na tela 
(apresente pulando  as linhas e dando espaço entre as colunas, para deixar ela visualmente parecendo como uma matriz).*/

int main(void){
	int matriz[5][5];
	int i, j;
	
		for(i = 0; i < 4; i++)
			for(j = 0; j < 4; j++)
			{
				if(i == j)
					matriz[i][j] = 1;
				if(i != j)
					matriz[i][j] = 0;
			}
			
			
				for(i = 0; i < 4; i++){
					for(j = 0; j < 4; j++)
					{
						printf("%d ", matriz[i][j]);
						
					}
					printf("\n");
				}
			
			return 0;
}
