#include<stdio.h>
#include<locale.h>

void main(){
	/*Faça um programa que receba dois números inteiros e gere os números
    inteiros que estão no intervalo compreendido por eles.*/

	setlocale(LC_ALL,"");
	int n1, n2;
	
	printf("digite um número: ");
	scanf("%d",&n1);
	
	printf("digite um número: ");
	scanf("%d",&n2);
	
	int i;
	    if(n1>n2){
	    for(i=n1-1; i > n2; i--){
		    printf("%d \n",i);}
		    
	}else if(n1<n2){
		for(i=n1+1; i < n2; i++){
		    printf("%d \n",i);}
    }
}
	

