#include <stdio.h>
/*Um  n�mero  natural  � triangularse  �  igual  �  soma  dos nprimeiros  n�meros  
naturais consecutivos, a partir de 1.  Por exemplo, 1,  3, 6, 10, 15 s�o  triangulares.  
Capture um n�mero inteiro natural e informe se ele� triangular.*/

void main(){
	int numerousuario;
	int i;
	int somatoria = 0;
	
	printf("Digite um numero: ");
	scanf("%d",&numerousuario);
	
	for(i = 0; somatoria < numerousuario; i++)
		somatoria = somatoria + i;
		
	if(somatoria == numerousuario)
		printf("O numero e triangular!!!");
	else
		printf("O numero nao � triangular!!!");
}

