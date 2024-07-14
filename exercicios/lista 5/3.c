#include <stdio.h>
#include <locale.h>

/*Altere o programa de cálculo do fatorial, permitindo ao usuário 
calcular o fatorial várias vezes e limitando o fatorial a números 
inteiros positivos e menores que 16.*/

int main()
{
	setlocale(LC_ALL, "");
	
	float i, num, fat = 1;

	while(num <= 16 || num > 0)
	{
		printf("Digite um número entre 0 e 16 para ver seu fatorial: ");
    	scanf("%f", &num);
		
		for(i = 1;i <= num; i++)
		{
        	fat=fat*i;
        	printf("Fatorial de %0.f é %0.f\n", i, fat);
    	}
	}    
}
