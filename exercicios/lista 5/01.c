#include <stdio.h>
#include <locale.h>

void main(){
	/*Fa�a um programa que pe�a 10 n�meros inteiros, calcule e mostre a
    quantidade de n�meros pares e a quantidade de n�meros �mpares.*/

    setlocale(LC_ALL,"");
    int n, cont = 0, par = 0, impar = 0;
    
    while(cont<10){
    	cont++;
    	printf(" %d - digite 10 n�meros inteiros: ",cont);
    	    scanf("%d",&n);
    	    
    	if(n%2==0){
		    n = 1;
		    par = n + par;
	    }else if(n%2==1){
		    n = 1;
		    impar = n + impar;
	    }
    }
	printf("Tem %d n�meros pares.\n E %d n�meros impares.",par, impar);
}
