#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int Soma(int numero1, int numero2)
{
    return numero1 + numero2;
}
int Multiplicacao(int numero1, int numero2)
{
    return numero1 * numero2;
}

void main(void)
{
    /*4.3  Refatore (refa�a) a solu��o proposta para o item 4.2 fazendo a chamada das fun��es (soma e multiplica��o)
    atrav�s do uso de ponteiros  (para o c�digo das fun��es e n�o para os par�metros).
    4.2  Elabore uma ou mais fun��es que recebe dois n�meros inteiros como par�metro (n1 e    n2) e retorne:
    a) a soma dos n�meros;
    b) a multiplica��o dos n�meros.*/
    int (*soma)(int,int);
    int (*multiplicacoes)(int,int);
    int numero1, numero2;

    setlocale(LC_ALL,"");
    printf("Digite o 1� n�mero: ");
    scanf("%d", &numero1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &numero2);

    soma = Soma;
    multiplicacoes = Multiplicacao;

    printf("\nO resultado da soma �: %d", soma(numero1, numero2));
    printf("\nO resultado da multiplica��o �: %d\n\n", multiplicacoes(numero1,numero2));

}


