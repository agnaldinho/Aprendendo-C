#include<stdio.h>
#include<locale.h>

//Capture 5 dados do tipo int do usuário, depois capture novamente mais 5 números do tipo int e armazene-os em outro vetor. Imprima a união destes dois vetores.

int main(void){
	setlocale(LC_ALL,"");
	
	int vetor1[5], vetor2[5], uniao[10];
	int i, j;
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com um número: ");
		scanf("%d", &vetor1[i]);
		uniao[i] = vetor1[i];
	}
	
	for (i = 0; i < 5; i++){
		printf("\nEntre com mais números: ");
		scanf("%d", &vetor2[i]);
		uniao[i+5] = vetor2[i];
	}
	
	for (i = 0; i < 10; i++){
		
		for (j = i+1 ; j < 10; j++){
			if (uniao[i] == uniao[j])
			uniao[j] = -999999;
			else{
			}
		}
	}
	for (i = 0; i < 10; i++){
		
		if (uniao[i] != -999999){
			printf("\nUnião dos vetores = %d\n", uniao[i]);
			}else{}
	}
          
	return 0;
}
