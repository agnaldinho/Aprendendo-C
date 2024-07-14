#include <stdio.h>
//Crie e leia uma matriz 4x4, conte e escreva quantos valores maiores que 10 ela possui.

int main(void){
	int matriz[4][4];
	int i, j;
	
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
		{
			printf("Valores da matriz posicao (%d,%d) :",i, j);
			scanf("%d", &matriz[i][j]);
		}
		
			printf("\n Os numeros maior que 10 são:\n");
			
		for(i = 0; i < 4; i++)
			for(j = 0; j < 4; j++)
			{
				if(matriz[i][j] > 10)
				{
					printf("%d, ", matriz[i][j]);
					
				}	

			}
	
	
	
	return 0;
}
