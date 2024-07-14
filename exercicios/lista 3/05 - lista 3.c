#include <stdio.h>

void main(){
	/*
	Faça um algoritmo para ler: quantidade atual em estoque, quantidade
    máxima em estoque e quantidade mínima em estoque de um produto.
    Calcular e escrever a quantidade média ((quantidade média =
    quantidade máxima + quantidade mínima)/2). Se a quantidade em
    estoque for maior ou igual a quantidade média escrever a mensagem
    Não efetuar compra', senão escrever a mensagem 'Efetuar compra'.
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
