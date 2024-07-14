#include <stdio.h>

/*Crie uma estrutura que armazene o dia, mês e ano. Após isto, peça para o usuário entrarcom  duas  datas  completas.  Calcule  o  número  
de  dias  entre  as  duas  datas  (utilize funções).*/

int SomarDatas(int dia, int mes, int ano,int dia2, int mes2, int ano2)
{
	int Dia, Mes,Ano;
	
	Dia = (dia - dia2) * -1;
	Mes = mes - mes2;
	Ano = (ano2 - ano) * -1;
	
	return printf("Faltam %i dias, %i meses e %i ano! ",Dia,Mes,Ano);
}

typedef struct
{
	int dia;
	int mes;
	int ano;
}DATAS_ANO;

void main()
{
	int i;
	DATAS_ANO datas[2];
	
	for(i = 0; i < 2; i++)
	{
		printf("-----Digite a %dº data------", i+1);
		
		printf("\n Digite o dia: ");
		scanf("%d", &datas[i].dia);
		
		printf("\nDigite o mês: ");
		scanf("%d", &datas[i].mes);
		
		printf("\nDigite o ano: ");
		scanf("%d", &datas[i].ano);
	}
	SomarDatas(datas[0].dia,datas[0].mes,datas[0].ano,datas[1].dia,datas[1].mes,datas[1].ano);

}
