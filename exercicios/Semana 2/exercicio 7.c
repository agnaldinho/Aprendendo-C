#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
//Leia os valores dos três ângulos de um triângulo. A partir destes valores apresente ao usuário se este triângulo é retângulo, acutângulo ou obtusângulo.
void main(){
	setlocale(LC_ALL,"");
	int angulo1, angulo2, angulo3;
	
	printf("Digite o primeiro ângulo: ");
	scanf("%d",&angulo1);
	printf("Digite o segundo ângulo: ");
	scanf("%d",&angulo2);
	printf("Digite o terceiro ângulo: ");
	scanf("%d",&angulo3);
	
	if((angulo1 == 90  && angulo2 == 90) && (angulo3 == 90)) //criei um if, se apresentar os tres angulos de 90 graus e um triangulo retangulo
	    printf("Esses mostram um triângulo retângulo");
	
	else if((angulo1 > 91 || angulo2 > 91) && (angulo3 > 91) && (angulo1 < 180 || angulo2 < 180) && (angulo3 < 180)) 
	    printf("Esses valores mostram um triângulo obtusângulo"); // criei um else if, se apresentar angulos maiores que 90 graus e menores que 180 e um triangulo obtusangulo
	    
	else if((angulo1 < 89 && angulo2 < 89) && (angulo3 < 89))
	    printf("Esses valores mostram um triângulo acutângulo"); // outro else if mas, agora se for menor que 90 vai ser um triangulo acutangulo
	
	else{
		printf("Não form nenhum padrão de triangulo com angulos"); // e criei um else se nao aparecer nenhum desses padrão
	}
}
