#include <stdio.h>

typedef struct
{
	char modelo[30];
	int ano;
	char placa[30];
	
}FICHA_CARRO;


typedef struct
{
	char nome[30];
	char CPF[11];
}FICHA_PROPRIETARIO;

void main ()
{
	
	FICHA_PROPRIETARIO proprietario;
	FICHA_CARRO carro;
	
	printf("\n --- CADASTRO DO CARRO ---");
	
	printf("\n Digite o modelo do carro:");
	scanf("%s",&carro.modelo);
	
	printf("\n Digite o ano do carro:");
	scanf("%i",&carro.ano);
	
	printf("\n Digite a placa do carro:");
	scanf("%s",&carro.placa);
	
	printf("\n --- CADASTRO DO PROPRIETÁRIO ---");
	
	printf("\n Digite o nome do proprietário:");
	scanf("%s",&proprietario.nome);
	
	printf("\n Digite o CPF do proprietário:");
	scanf("%s",&proprietario.CPF);
	
	printf("\n\n------DADOS CADASTRADOS--------");
	printf("Proprietario: %s / CPF: %s", proprietario.nome, proprietario.CPF);
	printf("\nCarro: \n %s - Ano: %d - Placa: %s", carro.modelo,carro.ano,carro.placa);
	
	return 0;
}

