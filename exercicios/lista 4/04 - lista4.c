#include <stdio.h>
#include <locale.h>

void main(){
	setlocale(LC_ALL,"");
	
    /*Fa�a um Programa que pergunte em que turno voc� estuda. Pe�a para
    digitar M-matutino ou V-Vespertino ou N- Noturno. Imprima a mensagem
    "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou "Valor Inv�lido!", conforme o
    caso*/
    
    char letras[] = {};
    
    printf("Em qual turno voc� estuda?");
	printf("\ndigite M - Matutino V - Vespertino N - Norturno: ");
    scanf("%c",&letras);
    
    
	if(letras[0] == 'M' || letras[0] == 'm'){
    	printf("Bom dia!!");
	}
	else if(letras[0] == 'V'|| letras[0] == 'v'){
    	printf("Boa tarde!!");
	}
	else if(letras[0] == 'N' || letras[0] == 'n'){
    	printf("Boa noite!!");
	}else{
		printf("Valor invalido!!");
	}
	
}
    
    


