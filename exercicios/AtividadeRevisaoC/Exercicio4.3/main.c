#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    /*Dado um ano, informe se ele é ou não bissexto.
    Dicas: 1) um ano é bissexto se é divisível por 4 mas não por 100; 2) se for divisível por 4 e por
    100, tem também que ser divisível por 400.*/

    int ano;

    printf("Informe o ano, para realizar se é bissexto ou não: ");
    scanf("%d", &ano);

    if((ano % 4 == 0 && ano %100 != 0) || (ano %400 == 0))
    {
        printf("Esse ano é bissexto!!!");
    }
    else
    {
        printf("Esse ano não é bissexto!!!");
    }



}
