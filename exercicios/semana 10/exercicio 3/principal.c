#include <stdio.h>
#include <locale.h>
#include "Calculos.h"

int main()
{
	setlocale(LC_ALL,"");
	float ValorA, ValorB, ValorC;
	
	printf("Entre com o valor A: ");
	scanf("%f", &ValorA);
	
	printf("Entre com o valor B: ");
	scanf("%f", &ValorB);
	
	printf("Entre com o valor C: ");
	scanf("%f", &ValorC);	
	
	printf("O resultado Do X1 da baskhara é %.f", formulaDeBaskhara(ValorA, ValorB, ValorC));
	printf("\nO resultado Do X2 da baskhara é %.f", formulaDeBaskhara2(ValorA, ValorB, ValorC));
	printf("\nO resultado do outro cateto é %.f ", EncontrarCateto(ValorA, ValorB));
	printf("\nO resultado de hipotenusa é %.f", EncontrarHipotenusa(ValorA, ValorB));
	printf("\nO resultado do Perimetro é %.2f",EncontrarPerimetroCirculo(ValorA));
	printf("O resultado do volume da esfera é %.2f",EncontrarVolumeEsfera(ValorA));
	
	
	
}
