#include <stdio.h>
#include <locale.h>

void main(){
	/*Numa elei��o existem tr�s candidatos. Fa�a um programa que pe�a o n�mero
    total de eleitores. Pe�a para cada eleitor votar e ao final mostrar o n�mero de
    votos de cada candidato.*/
	setlocale(LC_ALL,"");
	int e, cont = 0, voto, candidatoa, candidatob, candidatoc;
	candidatoa = 0;
	candidatob = 0;
	candidatoc = 0;
		
	printf("digite o n�mero total de eleitores: ");
	scanf("%d",&e);
	
	while(cont < e){
		cont++;
		printf(" %d - Digite 1 para votar no candidato A, 2 para o candidato B e 3 para o candidato C: ",cont);
		scanf("%d",&voto);
		if(voto == 1){
			candidatoa = candidatoa + 1;
		}else if(voto == 2){
			candidatob = candidatob + 1;
		}else if(voto == 3){
			candidatoc = candidatoc + 1;
		}
	}
	    printf("o candidatoA teve %d votos",candidatoa);
		printf("\no candidatoB teve %d votos",candidatob);
		printf("\no candidatoC teve %d votos",candidatoc);
}
