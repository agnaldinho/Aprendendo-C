#include <stdio.h>
#include <locale.h>

/*Altere o programa de c�lculo do fatorial, permitindo ao usu�rio 
calcular o fatorial v�rias vezes e limitando o fatorial a n�meros 
inteiros positivos e menores que 16.*/

int main()
{
	setlocale(LC_ALL, "");
	
	float i, num, fat = 1;

	while(num <= 16 || num > 0)
	{
		printf("Digite um n�mero entre 0 e 16 para ver seu fatorial: ");
    	scanf("%f", &num);
		
		for(i = 1;i <= num; i++)
		{
        	fat=fat*i;
        	printf("Fatorial de %0.f � %0.f\n", i, fat);
    	}
	}    
}
