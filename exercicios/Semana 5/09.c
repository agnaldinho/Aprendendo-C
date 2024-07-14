#include <stdio.h>

//Faça um programa que leia uma matriz 4x4 e 
//depois leia um valor X. Verifique quantas vezes X aparece dentro da matriz e imprima este número.

int main(void){
	//declarando variavel
	int matriz[4][4] = { {32, 3, 49, 32}, {39, 1, 0, 32}, {0, 0, 1, 1}, {32, 0, 1, 49} };
	int i, j, numerousuario;
	int soma = 0;
	
	//entrando com o numero do usuario
	printf("Digite um numero: ");
	scanf("%d", &numerousuario);
	
	for(i = 0; i < 4; i++)
		for(j = 0; j < 4; j++)
		{
			if(matriz[i][j] == numerousuario) //se o numero for igual do usuario dentro da matriz ele vai somando 1
			{
				matriz[i][j] = 1; //declarei a matriz = 1 para ir somando
				soma = soma + matriz[i][j];
			}
			
		}
	printf("Apareceu %d vezes esse numero dentro da matriz!", soma); //saida
	
	
	return 0;
}
