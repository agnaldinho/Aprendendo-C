#include<stdio.h>
#include<locale.h>

void main(){
	/*Altere o programa anterior para mostrar no final a soma dos números.*/

	setlocale(LC_ALL,"");
	int n1, n2, soma = 0;
	
	printf("digite um número: ");
	scanf("%d",&n1);
	
	printf("digite um número: ");
	scanf("%d",&n2);
	
	int i;
	    if(n1>n2){
	    for(i=n1-1; i > n2; i--){
		    printf("%d \n",i);
			soma = soma + i;
			}
		    
	}else if(n1<n2){
		for(i=n1+1; i < n2; i++){
		    printf("%d \n",i);
			soma = soma + i;
			}
    }
    printf("A soma desses intervalos é: %d",soma);
}
	

