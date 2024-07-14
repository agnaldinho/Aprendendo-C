#include <stdio.h>

/*Crie uma matriz 3x3 e preencha ela com valores aleat�rios. Depois entre com um valor X. O programa dever� fazer uma busca deste 
valor na matrize, se encontr�-lo, mostrar a   posi��o   da   linha   e   coluna.   Se   n�o   encontrar   mostrar   uma   mensagem �n�o encontrado�.*/

int main(void){
	int matriz[3][3] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int i, j, numeroUsuario;
	int naoencontrado = 0; // 0 significa que nao encontrou, 1 significa encontrou 
	
	printf("Digite um numero para localizar na matriz: ");
	scanf("%d", &numeroUsuario);
	
	// Procurando pelo n�mero do usu�rio na matriz		
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(numeroUsuario == matriz[i][j])
			{
				// Se entrou dentro deste if, � porque encontrou!!!
				printf("A posicao da matriz e: %d, %d", i, j);
				naoencontrado = 1;
			}				
		}
	}
		
	// Caso n�o encontrou o n�mero do usu�rio, mostrar mensagem pertinente
	if(naoencontrado == 0)
	{
		printf("Valor nao encontrado");
	}
	
	
	
	return 0;
}
