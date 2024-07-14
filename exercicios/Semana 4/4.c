#include<stdio.h>
#include<locale.h>

// Capture 5 dados do tipo float do usuário. Após a captura apresente o maior destes valores e a sua posição no vetor.

int main(void){
	setlocale(LC_ALL,"");
	
	float numeroUsuario[5], numeroMaior;
	int i, posicao = 0;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um número: ");
		scanf("%f", &numeroUsuario[i]);
	}
	
	numeroMaior = numeroUsuario[0];
	
	for (i = 0; i < 5; i++){
		
		if (numeroUsuario[i] > numeroMaior){
			
		  numeroMaior = numeroUsuario[i];
		      posicao = i;
         }
     }
	
	printf("\n\nNúmero maior = %.1f\n", numeroMaior);
	printf("\n\n %dº Posição", posicao+1);
	
	return 0;
}
