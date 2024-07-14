#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo float do usuário. Após a captura, armazene em um outro vetor o quadrado de cada um dos valores originais.

int main(void){
	setlocale(LC_ALL,"");
	
	float numeroUsuario[5], quadrado[5];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um número: ");
		scanf("%f", &numeroUsuario[i]);
	}
	
	for (i = 0; i < 5; i++){
		quadrado[i] = numeroUsuario[i] * numeroUsuario[i];
		printf("\nO quadrado de cada número, %d = %.2f\n ", i+1, quadrado[i]);
	}
	return 0;
}
