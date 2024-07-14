#include <stdio.h>

//Mostre a quantidade de elementos iguais a 0 dentro de uma matriz 3x3.

int main(void){
	//declarando a variavel
	int matriz [3][3] = { {0,2,0}, {1,2,0},{40,2,4} };
	int i, j;
	int quantidadezero = 0;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
		{
			if(matriz[i][j] == 0)
			{
				matriz[i][j] = 1; // se tiver 0 na matriz ela vai adicionando 1
				quantidadezero = quantidadezero + matriz[i][j];
			}
			
		}
	//apresentando o resultado
	printf("A quantidade de zeros e: %d", quantidadezero);
	
	return 0;
	
	
	
}
