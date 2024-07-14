#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
    /*4.1  Elabore uma ou mais fun��es que receba a nota de 3 provas (n1, n2 e n3),
    calcule e retorne:
    a)    m�dia aritm�tica simples (n1 + n2 + n3) / 3
    b)    a m�dia ponderada ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10
    A.  Utilizando fun��es com passagem de par�metros por valor;*/

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;

    printf("Digite 1� N�mero: ");
    scanf("%d", &n1);
    printf("Digite 2� N�mero: ");
    scanf("%d", &n2);
    printf("Digite 3� N�mero: ");
    scanf("%d", &n3);

    int media = MediaAritmetica(n1, n2, n3);
    printf("\nA m�dia aritm�tica �: %d", media);

    int mediaP = MediaPonderada(n1, n2, n3);
    printf("\nA m�dia ponderada �: %d\n\n", mediaP);


}
int MediaAritmetica(int n1, int n2, int n3)
{
    return (n1 + n2 + n3) / 3;
}
int MediaPonderada(int n1, int n2, int n3)
{
    return ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
}
