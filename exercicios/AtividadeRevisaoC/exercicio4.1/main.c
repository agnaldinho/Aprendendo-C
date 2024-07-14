#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    /* 4.1 Dados uma distância e o total de litros de combustível gasto por um automóvel para percorrê-la,
    informe o consumo médio.
    Observação: Apresente o resultado com 3 casas decimais de precisão.*/

    setlocale(LC_ALL, "");
    float Distancia, LitrosCombustivel, media;

    printf("Digite a distância percorrida em (KM):  ");
    scanf("%f", &Distancia);

    printf("Digite o total de litros gastos: ");
    scanf("%f", &LitrosCombustivel);

    media = Distancia / LitrosCombustivel;

    printf("O consumo médio é: %.3f km/l ",media);







}
