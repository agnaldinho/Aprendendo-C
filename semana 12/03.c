#include <stdio.h>

/*Fa�a um programa que crie uma vari�vel capaz de armazenar o t�tulo, autor, editora e ano de publica��o de um livro. Atribua valores aos 
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
	
	printf("\nDigite o ano de publica��o do livro: ");
	scanf("%d", &ficha.anoPublicacao);
	
	
	printf("----------Livros Cadastrados----------\n");
	
	printf("\nTitulo: %s",ficha.titulo);
	printf("\nAutor: %s",ficha.autor);
	printf("\nEditora: %s",ficha.editora);
	printf("\nPublica��o: %d", ficha.anoPublicacao);
	
}

