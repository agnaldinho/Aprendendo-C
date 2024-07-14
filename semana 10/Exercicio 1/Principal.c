#include <stdio.h>
#include "Geometria.h"

int main()
{
	float valorUsuario;
	printf("Entre com um valor: ");
	scanf("%f", &valorUsuario);
	
	printf("\nO perimetro de um circulo de raio %f eh: %f", valorUsuario, PerimetroCirculo(valorUsuario));
	printf("\nO perimetro de um quadrado de lado %f eh: %f", valorUsuario, PerimetroQuadrado(valorUsuario));
	printf("\nO volume de uma esfera de raio %f eh: %f", valorUsuario, VolumeEsfera(valorUsuario));
	printf("\nO volume de um cubo de lado %f eh: %f", valorUsuario, VolumeCubo(valorUsuario));
	
	return 0;
}

