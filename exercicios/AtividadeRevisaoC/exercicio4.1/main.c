#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /* 4.1 Dados uma dist�ncia e o total de litros de combust�vel gasto por um autom�vel para percorr�-la,
    informe o consumo m�dio.
    Observa��o: Apresente o resultado com 3 casas decimais de precis�o.*/

    setlocale(LC_ALL, "");
    float Distancia, LitrosCombustivel, media;

    printf("Digite a dist�ncia percorrida em (KM):  ");
    scanf("%f", &Distancia);

    printf("Digite o total de litros gastos: ");
    scanf("%f", &LitrosCombustivel);

    media = Distancia / LitrosCombustivel;

    printf("O consumo m�dio �: %.3f km/l ",media);







}
