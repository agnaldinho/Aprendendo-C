#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
//Capture três números e apresente-os em ordem crescente.
void main()
{
	int num1, num2, num3;
	
	//Proposta: Ao digitar tres numeros, o programa fornecera os numeros em ordem crescente!
	
	printf("Por favor, digite o primeiro numero:\n");
	scanf("%d", &num1);
	printf("Digite o segundo numero:\n");
	scanf("%d", &num2);
	printf("Digite o terceiro numero:\n");
	scanf("%d", &num3);
	
	if (num1 > num2 && num2 > num3)
	printf("\nNumeros em ordem crescente: %d, %d e %d", num3,num2,num1);
	
	if (num2 > num1 && num1 > num3)
	printf("\nNumeros em ordem crescente: %d, %d e %d", num3,num1,num2);
	
	if (num3 > num1 && num1 > num2)
	printf("\nNumeros em ordem crescente: %d, %d e %d", num2,num1,num3);
	
	if (num2 > num3 &&  num3 > num1)
	printf("\nNumeros em ordem crescente: %d, %d e %d", num1,num3,num2);
	
	if (num3 > num2 && num2 > num1)
	printf("\nNumeros em ordem crescente: %d, %d e %d", num1,num2,num3);
	
	if (num1 > num3 && num3 > num2)
	printf("\nNumeros em ordem crescente: %d, %d e %d", num2,num3,num1);
	
	
}
