#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*Fa�a um verificador de 
senhas corretas. O usu�rio entra com uma senha (num�rica) e voc� verifica se ela bate com o valor configurado internamente pelo c�digo. 
Mostre uma mensagem pertinente em cada caso.*/

void main(){
	int senha;
	
	setlocale(LC_ALL, "");
	printf("Digite a senha correta:  ");
	scanf("%d",&senha);
	
	if(senha == 1907 && 1234 && 0704) //Definindo quais senhas sao corretas
	{
		printf("A senha est� correta");
		system("color 2");
	}
	else
	{
		printf("A senha est� incorreta!!"); // se for falso cai direto nesse else
		system("color 4");
	}
}
