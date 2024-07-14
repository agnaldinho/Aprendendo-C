#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo int do usuário, depois capture novamente mais 5 números do tipo int e armazene-os em outro vetor. Imprima a diferença destes dois vetores.

int main(void){
	setlocale(LC_ALL,"");
	
	int vetor1[5], vetor2[5], diferenca[10];
	int i, j;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um número: ");
		scanf("%d", &vetor1[i]);
		diferenca[i] = vetor1[i];
	}
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com mais números: ");
		scanf("%d", &vetor2[i]);
		diferenca[i+5] = vetor2[i];
	}
	
	printf("\n\nDiferença\n\n");
	
	for (i = 0; i < 10; i++){
		
	    for (j = i+1 ; j < 10; j++){
		if (diferenca[i] == diferenca[j]){
			diferenca[i] = -999999;
		}
	}
}
  for (i = 0; i < 5; i++){
  	if (diferenca[i] != -999999){
  		printf("\n%d\n", diferenca[i]);
	  }
  }
  return 0;
}
