#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    /*O perfil de uma pessoa pode ser determinado a partir da sua data de nascimento, conforme
    exemplificado a seguir. Dada uma data de nascimento, entrando com Dia, Mês e Ano, apresente
    como saída o perfil correspondente.*/

    int dia, mes, ano, perfil, Calculo1, Calculo2, Calculo3;

    printf("Digite sua data de nascimento para verificar como é seu perfil!\n\n");

	printf("Digite seu dia de nascimento: ");
    scanf("%d",&dia);
    printf("Digite seu mês de nascimento: ");
    scanf("%d",&mes);
    printf("Digite seu ano de nascimento: ");
    scanf("%d",&ano);

    Calculo1 = (dia*100 + mes) + ano;
    Calculo2 = (Calculo1 / 100) + (Calculo1 % 100);
    Calculo3 = Calculo2 % 5;

    switch (Calculo3%5)
     {
        case 0:
           printf("Perfil Timido");
           break;
        case 1:
           printf("Perfil Sonhador");
           break;
        case 2:
           printf("Perfil Paquerador");
           break;
        case 3:
           printf("Perfil Atraente");
           break;
        case 4:
           printf("Perfil irresistível");
           break;
     }






}
