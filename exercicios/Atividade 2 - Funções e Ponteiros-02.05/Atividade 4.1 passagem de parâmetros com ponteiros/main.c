#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;

    printf("Digite o 1� n�mero: ");
    scanf("%d", &n1);

    printf("Digite o 2� n�mero: ");
    scanf("%d", &n2);

    printf("Digite o 3� n�mero: ");
    scanf("%d", &n3);

    MediaAritmetica(&n1, &n2, &n3);
    MediaPonderada(&n1, &n2, &n3);

}
int MediaAritmetica(int *n1, int *n2, int *n3)
{
    int media;
    media =  (*n1 + *n2 + *n3) / 3;
    printf("\nA m�dia aritm�tica �: %d", media);

}
int MediaPonderada(int *n1, int *n2, int *n3)
{
    int media;
    media = ((*n1 * 2) + (*n2 * 3) + (*n3 * 5)) / 10;
    printf("\nA m�dia ponderada �: %d\n\n", media);
}
