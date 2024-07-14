#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    /*4.1  Elabore uma ou mais funções que receba a nota de 3 provas (n1, n2 e n3),
    calcule e retorne:
    a)    média aritmética simples (n1 + n2 + n3) / 3
    b)    a média ponderada ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10
    A.  Utilizando funções com passagem de parâmetros por valor;*/

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;

    printf("Digite 1° Número: ");
    scanf("%d", &n1);
    printf("Digite 2° Número: ");
    scanf("%d", &n2);
    printf("Digite 3° Número: ");
    scanf("%d", &n3);

    int media = MediaAritmetica(n1, n2, n3);
    printf("\nA média aritmética é: %d", media);

    int mediaP = MediaPonderada(n1, n2, n3);
    printf("\nA média ponderada é: %d\n\n", mediaP);


}
int MediaAritmetica(int n1, int n2, int n3)
{
    return (n1 + n2 + n3) / 3;
}
int MediaPonderada(int n1, int n2, int n3)
{
    return ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
}
