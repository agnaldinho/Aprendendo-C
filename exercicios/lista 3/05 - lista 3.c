#include <stdio.h>

void main(){
	/*
	Fa�a um algoritmo para ler: quantidade atual em estoque, quantidade
    m�xima em estoque e quantidade m�nima em estoque de um produto.
    Calcular e escrever a quantidade m�dia ((quantidade m�dia =
    quantidade m�xima + quantidade m�nima)/2). Se a quantidade em
    estoque for maior ou igual a quantidade m�dia escrever a mensagem
    N�o efetuar compra', sen�o escrever a mensagem 'Efetuar compra'.
	*/
	
	int qa, qma, qmi, qme;
	printf("digite a quantidade atual no estoque: ");
	scanf("%d",&qa);
	
	printf("digite a quantidade maxima em estoque: ");
	scanf("%d",&qma);
	
	printf("digite a quantidade minima em estoque: ");
	scanf("%d",&qmi);
	
	qme = (qma + qmi) / 2;
	
	if(qa>=qme){
		printf("nao efetuar compra!");
	}else{
		printf("efetuar compra!");
	}
	
}
