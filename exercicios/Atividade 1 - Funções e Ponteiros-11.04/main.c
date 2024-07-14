#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int numero1, numero2, numero3;
int main()
{

    /*Leia 3 valores A, B e C quaisquer do tipo inteiro.
    Faça uma função, utilizando ponteiros, que troque entre si os
    valores de forma que no final A contenha o maior valor, B, o valor
    intermediário e C, o menor valor.*/

    printf("Digite o 1º numero: ");
    scanf("%d", &numero1);
    printf("Digite o 2º numero: ");
    scanf("%d", &numero2);
    printf("Digite o 3° numero: ");
    scanf("%d", &numero3);
    imprime1();

}
void imprime1()
{
    int A, B, C;
    if(numero1 > numero2 && numero1 > numero2 && numero2 > numero3)
    {
        A = &numero1;
        B = &numero2;
        C = &numero3;
        return printf("A = %d B = %d C = %d",*A , *B, *C);
    }
    else if(numero1 > numero2 && numero1 > numero3 && numero2 < numero3)
    {
        A = &numero1;
        B = &numero3;
        C = &numero2;
        return printf("A = %d B = %d C = %d",*A , *B, *C);
    }

    else if(numero1 < numero2 && numero3 < numero2  && numero1 > numero3)
    {
        A = &numero2;
        B = &numero1;
        C = &numero3;
        return printf("A = %d B = %d C = %d",*A , *B, *C);
    }

    else if(numero1 < numero2 && numero3 < numero2  && numero1 < numero3)
    {
        A = &numero2;
        B = &numero3;
        C = &numero1;
        return printf("A = %d B = %d C = %d",*A , *B, *C);
    }
    else if(numero1 < numero2 && numero3 > numero2  && numero1 < numero3)
    {
        A = &numero3;
        B = &numero2;
        C = &numero1;
        return printf("A = %d B = %d C = %d",*A , *B, *C);
    }
    else if(numero1 > numero2 && numero3 > numero2  && numero1 < numero3)
    {
        A = &numero3;
        B = &numero1;
        C = &numero2;
        return printf("A = %d B = %d C = %d",*A , *B, *C);
    }
}

