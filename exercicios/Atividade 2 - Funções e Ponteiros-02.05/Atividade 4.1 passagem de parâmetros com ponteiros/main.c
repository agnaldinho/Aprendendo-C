#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "");
    int n1, n2, n3;

    printf("Digite o 1° número: ");
    scanf("%d", &n1);

    printf("Digite o 2° número: ");
    scanf("%d", &n2);

    printf("Digite o 3° número: ");
    scanf("%d", &n3);

    MediaAritmetica(&n1, &n2, &n3);
    MediaPonderada(&n1, &n2, &n3);

}
int MediaAritmetica(int *n1, int *n2, int *n3)
{
    int media;
    media =  (*n1 + *n2 + *n3) / 3;
    printf("\nA média aritmética é: %d", media);

}
int MediaPonderada(int *n1, int *n2, int *n3)
{
    int media;
    media = ((*n1 * 2) + (*n2 * 3) + (*n3 * 5)) / 10;
    printf("\nA média ponderada é: %d\n\n", media);
}
