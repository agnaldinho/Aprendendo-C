#include<stdio.h>
#include<locale.h>

//Escreva um programa que leia um número inteiro positivo e em seguida imprima essa mesma quantidade de linhas do Triângulo de Pascal:

int main(void){
	setlocale(LC_ALL,"");
	
	int numero, trianguloP[100];
	int i, j;
	
	printf("\nEntre com um número positivo: ");
	scanf("%d", &numero);
	
	for (i = 0; i <= numero; i++){
		for (j = 0; j <= i; j++){
			if (i == 0 || j == 0)
			trianguloP[i] = 1;
			else
			trianguloP[i] = trianguloP[i] * (i - j+1)/ j;
			
			printf(" ");
			printf("%d ", trianguloP[i]); 
		}
		printf("\n");
    }
	return 0;			
}
