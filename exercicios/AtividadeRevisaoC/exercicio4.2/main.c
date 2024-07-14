#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


/*4.2 Dada um temperatura em graus Fahrenheit, informe o valor correspondente em graus Celsius. Fórmula: C = (F –32) * (5 / 9)
Onde:C = Temperatura em graus Celsius, F = Temperatura em graus Fahrenheit*/

int main()
{
	setlocale(LC_ALL, "");
	float GrausF, GrausC;

	printf("Digite a temperatura em graus Fahrenheit:  ");
	scanf("%f",&GrausF);

	GrausC = (GrausF - 32) * 5 / 9;

	printf("A temperatura em graus celsius é: %.4f", GrausC);




}
