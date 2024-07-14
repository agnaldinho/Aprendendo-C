#include <stdio.h>

int main(){
	int tabuleiro = 8;
	int i, j;
	
	for(j = 0; j < tabuleiro; j++)
	{
		for(i = 0; i < tabuleiro; i++)
		{
			if((i+j) % 2 == 0)
				printf("P ");
			else
				printf("B ");
			
			
		}
		printf("\n");
	}
	
}
