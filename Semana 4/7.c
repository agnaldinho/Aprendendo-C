#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo float do usu�rio. Mostre a quantidade de n�meros positivos e a quantidade de n�meros negativos.

int main(void){
	setlocale(LC_ALL,"");
	
	float numeroUsuario[5];
	int i, quantidadePositivo = 0, quantidadeNegativo = 0;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um n�mero: ");
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
	printf("\n\nA quantidade de n�mero Positivo �: %d.", quantidadePositivo);
	
	printf("\n\nA quantidade de n�mero Negativo �: %d.", quantidadeNegativo);
}
