#include <stdio.h>

//2. Faça um Programa que peça um valor e mostre na tela se o valor é positivo ou negativo
void main(){
	float n1, n2;
	printf("digite um numero: ");
	scanf("%f",&n1);
	
	if(n1>0){
		printf("este numero e positivo");
	}else{
		printf("este numero e negativo");
	}
	
}
