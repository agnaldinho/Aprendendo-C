#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
	
	/*Faça um Programa para um caixa eletrônico. O programa deverá perguntar ao
    usuário a valor do saque e depois informar quantas notas de cada valor serão
    fornecidas. As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais. O valor
    mínimo é de 10 reais e o máximo de 600 reais. O programa não deve se
    preocupar com a quantidade de notas existentes na máquina.*/
    
    setlocale(LC_ALL,"");
    
    int valor, n1, n5, n10, n50, n100;
    
    n1=n5=n10=n50=n100=0;
    
    printf("digite o valor do saque: ");
    scanf("%d",&valor);
    
    while(valor>0){
    	
    	if(valor>=100){
    		valor = valor - 100;
    		n100++;
		}else if(valor>=50){
			valor = valor - 50;
    		n50++;
		}else if(valor>=10){
			valor = valor - 10;
    		n10++;
		}else if(valor>=5){
			valor = valor - 5;
    		n5++;
		}else if(valor>=1){
			valor = valor - 1;
    		n1++;
		}
		
	}
	
	printf(" N100 = %d , N50 = %d , N10 = %d , N5 = %d , N1 = %d",n100,n50,n10,n5,n1);
}
