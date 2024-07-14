#include <stdio.h>

/*Crie  um  programa  que  inicializa  e  exibe  uma  matriz  representando  um  tabuleiro  do “jogo da velha”, conforme o exemplo:*/

int main(void){
	//declarando variavel
	char matriz[3][3] = { ' ' };
	int i, j;
	
	matriz[0][1] = 'O'; 
	matriz[0][2] = 'X';
	matriz[1][0] = 'O';
	matriz[1][1] = 'X';
	matriz[1][2] = 'O';
	matriz[2][0] = 'X';
	
		for (i = 0; i < 3; i++){
		for (j = 0; j < 2; j++){
			printf(" %c |", matriz[i][j]);
		}
		printf(" %c ", matriz[i][j]);
		if (i < 2)
		  printf("\n---+---+---");
		printf("\n");
	}
	
	return 0;
}
