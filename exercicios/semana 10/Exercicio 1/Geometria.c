#include "Geometria.h"

// Definir COMO vai fazer

float PerimetroQuadrado(float lado)
{
	float perimetro = 4 * lado;
	return perimetro;
}

float PerimetroCirculo(float raio)
{
	float perimetro = 2 * 3.1415926 * raio;
	return perimetro;
}

float VolumeCubo(float lado)
{
	float volume = lado * lado * lado;
	return volume;
}

float VolumeEsfera(float raio)
{
	float volume = 4/3 * 3.1415926 * raio * raio * raio;
	return volume;
}
