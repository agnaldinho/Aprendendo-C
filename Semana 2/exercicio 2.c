#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
/*Faça um verificador de 
senhas corretas. O usuário entra com uma senha (numérica) e você verifica se ela bate com o valor configurado internamente pelo código. 
Mostre uma mensagem pertinente em cada caso.*/

void main(){
	int senha;
	
	setlocale(LC_ALL, "");
	printf("Digite a senha correta:  ");
	scanf("%d",&senha);
	
	if(senha == 1907 && 1234 && 0704) //Definindo quais senhas sao corretas
	{
		printf("A senha está correta");
		system("color 2");
	}
	else
	{
		printf("A senha está incorreta!!"); // se for falso cai direto nesse else
		system("color 4");
	}
}
