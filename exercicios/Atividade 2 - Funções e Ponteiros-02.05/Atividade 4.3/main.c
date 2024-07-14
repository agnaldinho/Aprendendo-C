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
    /*4.3  Refatore (refaça) a solução proposta para o item 4.2 fazendo a chamada das funções (soma e multiplicação)
    através do uso de ponteiros  (para o código das funções e não para os parâmetros).
    4.2  Elabore uma ou mais funções que recebe dois números inteiros como parâmetro (n1 e    n2) e retorne:
    a) a soma dos números;
    b) a multiplicação dos números.*/
    int (*soma)(int,int);
    int (*multiplicacoes)(int,int);
    int numero1, numero2;

    setlocale(LC_ALL,"");
    printf("Digite o 1° número: ");
    scanf("%d", &numero1);

    printf("Digite o 2° número: ");
    scanf("%d", &numero2);

    soma = Soma;
    multiplicacoes = Multiplicacao;

    printf("\nO resultado da soma é: %d", soma(numero1, numero2));
    printf("\nO resultado da multiplicação é: %d\n\n", multiplicacoes(numero1,numero2));

}


