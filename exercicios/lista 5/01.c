#include <stdio.h>
#include <locale.h>

void main(){
	/*Faça um programa que peça 10 números inteiros, calcule e mostre a
    quantidade de números pares e a quantidade de números ímpares.*/

    setlocale(LC_ALL,"");
    int n, cont = 0, par = 0, impar = 0;
    
    while(cont<10){
    	cont++;
    	printf(" %d - digite 10 números inteiros: ",cont);
    	    scanf("%d",&n);
    	    
    	if(n%2==0){
		    n = 1;
		    par = n + par;
	    }else if(n%2==1){
		    n = 1;
		    impar = n + impar;
	    }
    }
	printf("Tem %d números pares.\n E %d números impares.",par, impar);
}
