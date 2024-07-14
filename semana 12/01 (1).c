#include <stdio.h>

typedef struct
{
	char rua[50];
	char cidade[50];
	char estado[2];
	int numero;
	int cep;
}ENDERECO;

typedef struct
{
	char nome[30];
	char telefone[12];
	int idade;
	ENDERECO enderecoComercial, enderecoResidencial;	
	int codigoPlano;	
} FICHA_CADASTRO;

int main()
{
	int i;
	int a = 1,
		b = 2;
	FICHA_CADASTRO pessoas[30];
		
	
	for(i = 0 ; i <= 30; i++)
	{
		a++;
		b++;
		
		if(b > a)
		{
			printf("%d - Digite o nome do cliente: ", i+1);
			scanf("%s", pessoas[i].nome);
			
			printf("\nDigite o número do telefone do cliente: ");
			scanf("%s",&pessoas[i].telefone);
			
			printf("\nDigite a idade do cliente: ");
			scanf("%d",&pessoas[i].idade);
			
			printf("\n -----PREENCHIMENTO DE ENDEREÇO COMERCIAL------\n");
			
			printf("Digite o nome da rua: ");
			scanf("%s", &pessoas[i].enderecoResidencial.rua);
			
			printf("Digite o nome da cidade: ");
			scanf("%s", &pessoas[i].enderecoResidencial.cidade);
			
			printf("Digite o nome do estado: ");
			scanf("%s", &pessoas[i].enderecoResidencial.estado);
			
			printf("Digite o numero: ");
			scanf("%d", &pessoas[i].enderecoResidencial.numero);
			
			printf("Digite o CEP: ");
			scanf("%d", &pessoas[i].enderecoResidencial.cep);
			
			
			printf("\n -----PREENCHIMENTO DE ENDEREÇO COMERCIAL------\n");
			
			printf("Digite o nome da rua: ");
			scanf("%s", &pessoas[i].enderecoComercial.rua);
			
			printf("Digite o nome da cidade: ");
			scanf("%s", &pessoas[i].enderecoComercial.cidade);
			
			printf("Digite o nome do estado: ");
			scanf("%s", &pessoas[i].enderecoComercial.estado);
			
			printf("Digite o numero: ");
			scanf("%d", &pessoas[i].enderecoComercial.numero);
			
			printf("Digite o CEP: ");
			scanf("%d", &pessoas[i].enderecoComercial.cep);
			
			
		}
		
		
		
	}	
	return 0;
}


