#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
//Leia os valores dos tr�s �ngulos de um tri�ngulo. A partir destes valores apresente ao usu�rio se este tri�ngulo � ret�ngulo, acut�ngulo ou obtus�ngulo.
void main(){
	setlocale(LC_ALL,"");
	int angulo1, angulo2, angulo3;
	
	printf("Digite o primeiro �ngulo: ");
	scanf("%d",&angulo1);
	printf("Digite o segundo �ngulo: ");
	scanf("%d",&angulo2);
	printf("Digite o terceiro �ngulo: ");
	scanf("%d",&angulo3);
	
	if((angulo1 == 90  && angulo2 == 90) && (angulo3 == 90)) //criei um if, se apresentar os tres angulos de 90 graus e um triangulo retangulo
	    printf("Esses mostram um tri�ngulo ret�ngulo");
	
	else if((angulo1 > 91 || angulo2 > 91) && (angulo3 > 91) && (angulo1 < 180 || angulo2 < 180) && (angulo3 < 180)) 
	    printf("Esses valores mostram um tri�ngulo obtus�ngulo"); // criei um else if, se apresentar angulos maiores que 90 graus e menores que 180 e um triangulo obtusangulo
	    
	else if((angulo1 < 89 && angulo2 < 89) && (angulo3 < 89))
	    printf("Esses valores mostram um tri�ngulo acut�ngulo"); // outro else if mas, agora se for menor que 90 vai ser um triangulo acutangulo
	
	else{
		printf("N�o form nenhum padr�o de triangulo com angulos"); // e criei um else se nao aparecer nenhum desses padr�o
	}
}
