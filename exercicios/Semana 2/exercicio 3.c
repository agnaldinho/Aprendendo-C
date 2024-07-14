#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

/*No Brasil, a alíquota de imposto é variável conforme o salário da pessoa. Capture o valor do salário da pessoa e informe qual é a alíquota, 
em %, que ela está sujeita.•Até R$ 1903,98 não há alíquota.•De R$1903,99 até R$ 2826,65 a alíquota é de 7,5%•De R$2826,66 até R$ 3751,05 a alíquota 
é de 15%•De R$ 3751,06 até R$ 4664,6 a alíquota é de 22,5%•Acima de R$4664,68 a 
alíquota é de 27,5%•DESAFIO: Utilize apenas o operador relacional<(menor)!*/
void main(){
	float salario;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor do seu salario: ");
	scanf("%f",&salario);
	
	if(salario < 1903.98)  //criando if e else if para definir os valores dos salarios
	{
		printf("Não há aliquota");
	}
	else if(salario < 2826.65)
	{
		printf("A aliquota é de 7,5%!");
	}
	else if(salario < 3751.05)
	{
		printf("A aliquota é de 15%!");
	}
	else if(salario < 4664.6)
	{
		printf("A aliquota é de 22,5%!");
	}
	else if(salario < 9999999999)  // esse caso para definir o maior número possivel, para que possa digitar depois do if anterior usando apenas o sinal menor
	{
		printf("A aliquota é de 27,5%!");
	}
}
