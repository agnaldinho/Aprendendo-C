#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    /*Dado um ano, informe se ele � ou n�o bissexto.
    Dicas: 1) um ano � bissexto se � divis�vel por 4 mas n�o por 100; 2) se for divis�vel por 4 e por
    100, tem tamb�m que ser divis�vel por 400.*/

    int ano;

    printf("Informe o ano, para realizar se � bissexto ou n�o: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano %100 != 0) || (ano %400 == 0))
    {
        printf("Esse ano � bissexto!!!");
    }
    else
    {
        printf("Esse ano n�o � bissexto!!!");
    }



}
