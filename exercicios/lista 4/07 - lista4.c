#include <stdio.h>
#include <locale.h>

void main(){
	/*Fa�a um programa que leia 5 n�meros e informe a soma e a m�dia dos
    n�meros.*/
    
    float num, cont = 1, media, soma = 0;
    
    setlocale(LC_ALL,"");
	while(cont<=5){
    cont++;
	printf("digite um n�mero: ");
        scanf("%f",&num);
    	soma = soma + num;
    	media = soma / 5;
    }
    printf("A soma desses n�meros �: %.2f",soma);
    printf("\nA m�dia desses n�meros �: %.2f",media);
}
