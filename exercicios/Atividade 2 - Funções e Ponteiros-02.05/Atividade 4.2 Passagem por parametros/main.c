#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
        /*4.2  Elabore uma ou mais fun��es que recebe dois n�meros inteiros como par�metro (n1 e    n2) e retorne:
    a) a soma dos n�meros;
    b) a multiplica��o dos n�meros.*/

int main()
{
    int numero1, numero2;
    setlocale(LC_ALL,"");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numero2);

    int Somas = Soma(numero1, numero2);
    int multiplicacoes = Multiplicacao(numero1, numero2);

    printf("\nO resultado da soma �: %d", Somas);
    printf("\nO resultado da multiplica��o �: %d\n\n", multiplicacoes);


}
int Soma(int numero1, int numero2)
{
    return numero1 + numero2;
}
int Multiplicacao(int numero1, int numero2)
{
    return numero1 * numero2;
}
