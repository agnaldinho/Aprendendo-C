#include "Calculos.h"
#include <math.h>


float formulaDeBaskhara(float EncontrarValorA, float EncontrarValorB, float EncontrarValorC)
{
	float delta = EncontrarValorB*EncontrarValorB-4*EncontrarValorA*EncontrarValorC; 
	float ResultadoDelta = sqrt(delta);
	
	float x1 = ((-EncontrarValorB) + ResultadoDelta) / (2 * EncontrarValorA);	
}
float formulaDeBaskhara2(float EncontrarValorA, float EncontrarValorB, float EncontrarValorC)
{
	float delta = EncontrarValorB*EncontrarValorB-4*EncontrarValorA*EncontrarValorC; 
	float ResultadoDelta = sqrt(delta);
	
	float x2 = ((-EncontrarValorB) - ResultadoDelta) / (2 * EncontrarValorA);
	return x2;
}


float EncontrarCateto(float EncontrarValorA, float EncontrarValorB)
{
	float Cateto = EncontrarValorA + EncontrarValorB;
	float Cateto2 = EncontrarValorA - EncontrarValorB;
	float ValorCateto2 = Cateto * Cateto2;
	float ValorCateto1 = sqrt(ValorCateto2);
	return ValorCateto1;		
}


float EncontrarHipotenusa(float EncontrarValorA, float EncontrarValorB)
{
	float Hipotenusa = (EncontrarValorA*EncontrarValorA) + (EncontrarValorB*EncontrarValorB);
	float ResultadoHipotenusa = sqrt(Hipotenusa);
	return ResultadoHipotenusa;
}


float EncontrarPerimetroCirculo(float EncontrarValorA)
{
	float Perimetro = 2 * 3.14 * EncontrarValorA;		//C = 2 * p * r
	return Perimetro;
}


float EncontrarVolumeEsfera(float EncontrarValorA)      //Ve = 4. p.r³/ 3
{
	float VolumeEsfera = (4 * 3.14 * (EncontrarValorA*EncontrarValorA*EncontrarValorA)) / 3;
	return VolumeEsfera;
	
}

