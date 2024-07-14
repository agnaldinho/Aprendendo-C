#include <stdio.h>

/*Faça um programa que crie uma variável capaz de armazenar o título, autor, editora e ano de publicação de um livro. Atribua valores aos 
campos e exiba-a para testes.*/

typedef struct
{
	char titulo[50];
	char autor[50];
	char editora[50];
	int anoPublicacao;
	
}AUTOR_FICHA;


void main()
{
	AUTOR_FICHA ficha;
	
	printf("\nDigite o titulo do livro: ");
	scanf("%s", &ficha.titulo);
	
	printf("\nDigite o autor do livro: ");
	scanf("%s", &ficha.autor);
	
	printf("\nDigite a editora do livro: ");
	scanf("%s", &ficha.editora);
	
	printf("\nDigite o ano de publicação do livro: ");
	scanf("%d", &ficha.anoPublicacao);
	
	
	printf("----------Livros Cadastrados----------\n");
	
	printf("\nTitulo: %s",ficha.titulo);
	printf("\nAutor: %s",ficha.autor);
	printf("\nEditora: %s",ficha.editora);
	printf("\nPublicação: %d", ficha.anoPublicacao);
	
}

