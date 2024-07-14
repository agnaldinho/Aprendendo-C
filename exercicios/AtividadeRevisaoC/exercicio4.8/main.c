#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /*Em um banco, as contas são identificadas por números de até seis dígitos seguidos de um dígito
    verificador (DV) também chamado de dígito de controle, calculado conforme exemplificado a
    seguir. Dado um número de conta n, exiba o número de conta completo correspondente (número
    + DV).*/
    setlocale(LC_ALL, "");
    int cont = 0, digito, conta, soma = 0, conta1;

    printf("Informe o número da conta sem o dígito: ");
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
