#include <stdio.h>

/*Registre  internamente  um  n�mero  qualquer.  Pe�a  
para  o  usu�rio  entrar  com  um n�mero. Enquanto o 
n�mero que o usu�rio entrar for diferente do cadastrado 
imprima uma mensagem falandoque ele errou!*/

int main(){
	int numero, senhacorreta=1907;
	int i;
	
	printf("Digite o numero do sistema: ");
	scanf("%d",&numero);
	
	while(numero != senhacorreta) //se o numero digitado for incorreto, ele vai ficar repetindo
	{		
		
			printf("Numero incorreto, digite novamente: ");
			scanf("%d",&numero);
		
	}

	printf("A senha esta correta");
	
			
		
}
