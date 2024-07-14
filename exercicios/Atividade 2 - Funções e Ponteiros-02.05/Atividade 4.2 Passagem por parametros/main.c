#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
        /*4.2  Elabore uma ou mais funções que recebe dois números inteiros como parâmetro (n1 e    n2) e retorne:
    a) a soma dos números;
    b) a multiplicação dos números.*/

int main()
{
    int numero1, numero2;
    setlocale(LC_ALL,"");
    printf("Digite o 1° número: ");
    scanf("%d", &numero1);

    printf("Digite o 2° número: ");
    scanf("%d", &numero2);

    int Somas = Soma(numero1, numero2);
    int multiplicacoes = Multiplicacao(numero1, numero2);

    printf("\nO resultado da soma é: %d", Somas);
    printf("\nO resultado da multiplicação é: %d\n\n", multiplicacoes);


}
int Soma(int numero1, int numero2)
{
    return numero1 + numero2;
}
int Multiplicacao(int numero1, int numero2)
{
    return numero1 * numero2;
}
