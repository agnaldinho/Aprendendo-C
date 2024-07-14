#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo float do usuário. Mostre a quantidade de números positivos e a quantidade de números negativos.

int main(void){
	setlocale(LC_ALL,"");
	
	float numeroUsuario[5];
	int i, quantidadePositivo = 0, quantidadeNegativo = 0;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um número: ");
		scanf("%f", &numeroUsuario[i]);
	}
	
	for (i = 0; i < 5; i++){
		if (numeroUsuario[i] >= 0){
			quantidadePositivo = quantidadePositivo+1;
			}
			else{
				quantidadeNegativo = quantidadeNegativo+1;
			}
	}
	printf("\n\nA quantidade de número Positivo é: %d.", quantidadePositivo);
	
	printf("\n\nA quantidade de número Negativo é: %d.", quantidadeNegativo);
}
