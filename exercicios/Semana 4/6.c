#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo float do usu�rio. Ap�s a captura, armazene em um outro vetor o quadrado de cada um dos valores originais.

int main(void){
	setlocale(LC_ALL,"");
	
	float numeroUsuario[5], quadrado[5];
	int i;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um n�mero: ");
		scanf("%f", &numeroUsuario[i]);
	}
	
	for (i = 0; i < 5; i++){
		quadrado[i] = numeroUsuario[i] * numeroUsuario[i];
		printf("\nO quadrado de cada n�mero, %d = %.2f\n ", i+1, quadrado[i]);
	}
	return 0;
}
