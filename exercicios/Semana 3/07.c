#include <stdio.h>
/*Um  número  natural  é triangularse  é  igual  à  soma  dos nprimeiros  números  
naturais consecutivos, a partir de 1.  Por exemplo, 1,  3, 6, 10, 15 são  triangulares.  
Capture um número inteiro natural e informe se eleé triangular.*/

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
		printf("O numero nao é triangular!!!");
}

