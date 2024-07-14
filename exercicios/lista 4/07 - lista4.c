#include <stdio.h>
#include <locale.h>

void main(){
	/*Faça um programa que leia 5 números e informe a soma e a média dos
    números.*/
    
    float num, cont = 1, media, soma = 0;
    
    setlocale(LC_ALL,"");
	while(cont<=5){
    cont++;
	printf("digite um número: ");
        scanf("%f",&num);
    	soma = soma + num;
    	media = soma / 5;
    }
    printf("A soma desses números é: %.2f",soma);
    printf("\nA média desses números é: %.2f",media);
}
