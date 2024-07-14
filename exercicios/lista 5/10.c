#include <stdio.h>
#include <locale.h>

void main(){
	/*Faça um programa que leia o código dos itens pedidos e as quantidades
    desejadas. Calcule e mostre o valor a ser pago por item (preço * quantidade) e
    o total geral do pedido. Considere que o cliente deve informar quando o pedido
    deve ser encerrado.*/
	setlocale(LC_ALL,"");
	
	float cq, bs, bo, h, cb, r, c, q, pago, cont = 0, c1;
	
	printf("digite a quantidade de codigos: ");
	scanf("%f",&c1);
	
	while(cont<c1){
	cont++;
	
	printf("Digite o codigo do item: ");
	scanf("%f",&c);
	
	printf("Digite a quantidade: ");
	scanf("%f",&q);
	
	if(c == 100){
		cq = q * 1.20;
	}
	else if(c == 101){
		bs = q * 1.30;
	}
	else if(c == 102){
		bo = q * 1.50;
	}
	else if(c == 103){
		h = q * 1.20;
	}
	else if(c == 104){
		cb = q * 1.30;
	}
	else if(c == 105){
		r = q * 1.00;
	}
}
	pago = cq+bs+bo+h+cb+r;
	printf("O valor total é: %.2f ",pago);
}
