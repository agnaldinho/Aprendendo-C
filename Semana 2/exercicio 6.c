#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
/*Leia  os  valores  dos  tr�s  lados  de  um  tri�ngulo.  
A  partir  destes  valores  apresente  ao usu�rio se este tri�ngulo � equil�tero, is�sceles ou escaleno.*/
void main(){
	int angulo1, angulo2, angulo3;
	setlocale(LC_ALL,"");
	
	printf("Digite o lado A do valor do triangulo: ");
	scanf("%f",&angulo1);
	printf("Digite o lado B do valor do tri�ngulo: ");
	scanf("%f",&angulo2);
	printf("Digite o lado C do valor do tri�ngulo: "); 
	scanf("%f",&angulo3);
	
	if((angulo1 == angulo2) && (angulo2== angulo3)) // se os 3 lados do triangulo for igual e um equilatero, 
	    printf("Esse tri�ngulo � equil�tero");
	else if((angulo1 == angulo2) || (angulo2 == angulo3) || (angulo1 == angulo3)) // se 2 lados de um triangulo for igual e um isosceles
	    printf("Esse tri�ngulo � is�sceles");
	else{
		printf("Esse tri�ngulo � escaleno");  // agora se nao apresentar nenhumas das regras que aprensentei entao e um escaleno
	}
	
	
}
