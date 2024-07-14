#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int n1, n2, n3;

int main()
{
    setlocale(LC_ALL, "");
    printf("Digite o 1° Número: ");
    scanf("%d", &n1);

    printf("Digite o 1° Número: ");
    scanf("%d", &n2);

    printf("Digite o 1° Número: ");
    scanf("%d", &n3);

    MediaAritmetica();
    MediaPonderada();

}

int MediaAritmetica()
{
    int media;
    media = (n1 + n2 + n3) / 3;
    printf("\nA média aritmética é: %d", media);
}

int MediaPonderada()
{
    int media;
    media = ((n1 * 2) + (n2 * 3) + (n3 * 5)) / 10;
    printf("\nA média Ponderada é: %d\n\n", media);

}
