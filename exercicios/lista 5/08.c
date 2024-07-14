#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
	/*Faça um programa que leia uma quantidade indeterminada de números
    positivos e conte quantos deles estão nos seguintes intervalos: [0-25], [26-50],
    [51-75] e [76-100]. A entrada de dados deverá terminar quando for lido um
    número negativo.*/
	setlocale(LC_ALL,"");
	
	int cont = 0, n, n1, n2, n3, n4;
	n1=n2=n3=n4=0;
	
	while(n>=0){
		cont++;
		printf("%d - digite um número: ",cont);
		scanf("%d",&n);
		
		if(n>=0 && n<=25){
			n  = 1;
			n1 = n+n1;
		}else if(n>=26 && n<=50){
			n  = 1;
			n2 = n+n2;
	    }else if(n>=51 && n<=75){
			n  = 1;
			n3 = n+n3;
	    }if(n>=76 && n<=100){
			n  = 1;
			n4 = n+n4;
		}
	
    }
    printf("A quantidade de números entre os intervalos:  [0-25]: %d, [26-50]: %d, [51-75]: %d, [76-100]: %d",n1, n2, n3, n4);
}

