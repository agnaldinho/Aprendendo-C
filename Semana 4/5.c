#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo float do usuário. Após a captura apresente o menor destes valorese a sua posição no vetor.

int main(void){
	setlocale(LC_ALL,"");
	
	float numeroUsuario[5], menorNumero;
	int i, posicao = 0;
	
	for (i = 0; i < 5; i++){
		printf("\nDigite um Número: ");
		scanf("%f", &numeroUsuario[i]);
	}
	
	menorNumero = numeroUsuario[0];
	
	for (i = 0; i < 5; i++){
		if (numeroUsuario[i] < menorNumero){
			menorNumero = numeroUsuario[i];
			posicao = i;
		}
	}
	
	printf("\n\nMenor Número = %.1f\n", menorNumero);
	printf("\n %dº Posição", posicao+1);
	
	return 0;
}
