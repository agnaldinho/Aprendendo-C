#include <stdio.h>

//Mostre a quantidade de elementos diferentes de 0 dentro de uma matriz 3x3.

int main(void){
	//declarando a variavel
	int matriz [3][3] = { {10,2,0}, {4,0,0},{40,2,0} };
	int i, j;
	int diferentezero = 0;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
		{
			if(matriz[i][j] != 0)
			{
				matriz[i][j] = 1; //se for diferente de zero matriz vale por 1
				diferentezero = diferentezero + matriz[i][j]; // e vai adicionando 1
			}
			
		}
	//apresentando o resultado
	printf("A quantidade de elementos diferentes de zero: %d", diferentezero);
	
	return 0;
	
	
	
}
