#include "Primos.h"

int Modulo(int num)
{
	if(num < 0)
		num *= -1;
	
	return num;
}

char Primo(int num)
{
	int i, verifica = 0;
	
	for(i = 1; i <= (num/2); i++)
		if((num%i) == 0)
			verifica ++;
	
	if(verifica == 1)
		return 'S';
	
	return 'N';
}

int PrimeiroDigito(int num)
{
	num = Modulo(num);
	
	while(num > 9)
	{
		num /= 10;
	}
	
	return num;
}
