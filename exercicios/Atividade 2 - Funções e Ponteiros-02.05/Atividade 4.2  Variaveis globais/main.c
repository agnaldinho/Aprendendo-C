#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int numero1, numero2, numero3;
int main()
{
    setlocale(LC_ALL,"");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numero2);

    Soma();
    Multiplicacao();

}

int Soma()
{
    int somas;
    somas = numero1 + numero2;
    printf("\nO resultado da soma �: %d ",somas);
}
int Multiplicacao()
{
    int multiplicar;
    multiplicar = numero1 * numero2;
    printf("\nO resultado da Multiplica��o �: %d\n\n",multiplicar);
}
