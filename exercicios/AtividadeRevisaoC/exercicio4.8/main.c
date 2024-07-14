#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Em um banco, as contas s�o identificadas por n�meros de at� seis d�gitos seguidos de um d�gito
    verificador (DV) tamb�m chamado de d�gito de controle, calculado conforme exemplificado a
    seguir. Dado um n�mero de conta n, exiba o n�mero de conta completo correspondente (n�mero
    + DV).*/
    setlocale(LC_ALL, "");
    int cont = 0, digito, conta, soma = 0, conta1;

    printf("Informe o n�mero da conta sem o d�gito: ");
    scanf("%d", &conta);
    conta1 = conta;

    while(cont <= conta)
    {
        cont++;
        digito = conta%10;
        soma+=digito;
        conta/=10;
    }

    digito = soma%10;

    printf("numero da conta %.6d - %d",conta1, digito);
}
