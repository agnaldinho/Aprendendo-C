#include <stdio.h>
#include <locale.h>

void main(){
	/*Fa�a um programa que pe�a uma nota, entre zero e dez. Mostre uma
    mensagem caso o valor seja inv�lido e continue pedindo at� que o
    usu�rio informe um valor v�lido.*/
	
	setlocale(LC_ALL,"");
	
	float nota;
	printf("digite uma nota entre 0 e 10: ");
	    scanf("%f",&nota);
	    
	    while(nota>10 || nota<0){
		system("color 4");
		printf("nota invalida digite novamente!!!");
	    printf("\ndigite uma nota entre 0 e 10: ");
	        scanf("%f",&nota);
		}
		system("color 2");
	    printf("sua nota foi: %.2f",nota);
	
}
