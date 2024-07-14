#include <stdio.h>

int main(void)
{
	int a;
	int b;
	int i = 0 ;
	int potencia;
	
	printf ("Entre com o valor de A: ");
	scanf("%d", &a);
	
	printf ("Entre com o valor de B: ");
	scanf("%d", &b);
	
	for (i>-1;i<b; i++)
	{
		//potencia = a*(a*i);
		potencia *= a;
	}
	printf ("%d", i);
		printf ("\n O valor de A se elevado a B sera de : %d", potencia);
		

	
}
