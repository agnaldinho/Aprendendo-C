#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"");
    int numero1, numero2, numero3;

    printf("Digite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numero2);

    Soma(&numero1, &numero2);
    Multiplicacao(&numero1, &numero2);
}

int Soma(int *numero1, int *numero2)
{
    int somas;
    somas = *numero1 + *numero2;
    printf("\nO resultado da soma �: %d", somas);
}
int Multiplicacao(int *numero1, int *numero2)
{
    int multiplicacoes;
    multiplicacoes = *numero1 * *numero2;
    printf("\nO resultado da multiplica��o �: %d\n\n", multiplicacoes);
}
