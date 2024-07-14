#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

void main(){
	
	/*Fa�a um Programa para um caixa eletr�nico. O programa dever� perguntar ao
    usu�rio a valor do saque e depois informar quantas notas de cada valor ser�o
    fornecidas. As notas dispon�veis ser�o as de 1, 5, 10, 50 e 100 reais. O valor
    m�nimo � de 10 reais e o m�ximo de 600 reais. O programa n�o deve se
    preocupar com a quantidade de notas existentes na m�quina.*/
    
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
