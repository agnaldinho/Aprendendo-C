#include<stdio.h>
#include<locale.h>

void main(){
	/*Fa�a um programa que receba dois n�meros inteiros e gere os n�meros
    inteiros que est�o no intervalo compreendido por eles.*/

	setlocale(LC_ALL,"");
	int n1, n2;
	
	printf("digite um n�mero: ");
	scanf("%d",&n1);
	
	printf("digite um n�mero: ");
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
	

