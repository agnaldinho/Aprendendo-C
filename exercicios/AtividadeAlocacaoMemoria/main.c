#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *notas, media;
    printf("Deseja cadastrar quantas notas?");
    scanf("%f",&notas);

    notas = (float *) malloc(50*sizeof(float));

    for(int i = 0; i <= notas; i++)
    {
        media = notas[i] / i;
    }
    printf("%f", media);
}
