#include <stdio.h>
#include <locale.h>

void main(){
	
	setlocale(LC_ALL,"");
	int contador = 1, num, maior = -9999, menor = 99999;
	
		while(contador<4){
		contador++;
		printf("digite um numero: ");
		    scanf("%d",&num);
        }if(num<menor){
        	menor = num;
		}
		printf("o menor número é: %d",menor);
	}
