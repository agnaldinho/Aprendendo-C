#include <stdio.h>

/*Registre  internamente  um  número  qualquer.  Peça  
para  o  usuário  entrar  com  um número. Enquanto o 
número que o usuário entrar for diferente do cadastrado 
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
