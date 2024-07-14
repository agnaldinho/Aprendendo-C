#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   /*Dado um valor n, exiba uma contagem regressiva do valor até atingir zero. Por exemplo: n = 10,
    resultado = 10 9 8 7 6 5 4 3 2 1 0*/

    setlocale(LC_ALL, "");
    int numero;

    printf("Digite um número, para começar contagem regressiva: ");
    scanf("%d", &numero);
    printf("Resultado = ");
    for(int i = 0; i <= numero; numero--)
        {
            printf("%d ",numero);
        }
    for(int i = 0; i >= numero; numero++)
    {
            printf("%d ",numero);
    }


}
