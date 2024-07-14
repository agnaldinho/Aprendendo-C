#include <stdio.h>
#include <locale.h>

void main(){
	/*Faça um programa que calcule o fatorial de um número inteiro fornecido pelo
    usuário. Ex.: 5!=5.4.3.2.1=120*/
	setlocale(LC_ALL,"");
	
    float fat = 1, num;
    
    printf("Digite um fatorial para calcular: ");
        scanf("%f",&num);
    
	int i;
	for (i=num; i>1; i--){
		fat = fat*i;
	}
	printf(" %.f ! = %.3f",num, fat);

}
