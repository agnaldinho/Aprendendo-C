#include <stdio.h>
    /*
    3. Fa�a um programa para a leitura de duas notas parciais de um aluno. O
    programa deve calcular a m�dia alcan�ada por aluno e apresentar:
    � A mensagem "Aprovado", se a m�dia alcan�ada for maior ou igual a
    sete;
    � A mensagem "Reprovado", se a m�dia for menor do que sete;
    */
    
void main(){
	float n1, n2, media;
	printf("digite a nota 1: ");
	scanf("%f",&n1);
	
	printf("digite a nota 2: ");
	scanf("%f",&n2);
	
	media = (n1+n2) / 2;
	
	if(media>=7){
		printf("parabens aprovado!!!!");
	}else{
		printf("estude maiss reprovado!!!");
	}
	
	
}
