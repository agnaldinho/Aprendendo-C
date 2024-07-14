#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>

/*No Brasil, a al�quota de imposto � vari�vel conforme o sal�rio da pessoa. Capture o valor do sal�rio da pessoa e informe qual � a al�quota, 
em %, que ela est� sujeita.�At� R$ 1903,98 n�o h� al�quota.�De R$1903,99 at� R$ 2826,65 a al�quota � de 7,5%�De R$2826,66 at� R$ 3751,05 a al�quota 
� de 15%�De R$ 3751,06 at� R$ 4664,6 a al�quota � de 22,5%�Acima de R$4664,68 a 
al�quota � de 27,5%�DESAFIO: Utilize apenas o operador relacional<(menor)!*/
void main(){
	float salario;
	setlocale(LC_ALL, "portuguese");
	printf("Digite o valor do seu salario: ");
	scanf("%f",&salario);
	
	if(salario < 1903.98)  //criando if e else if para definir os valores dos salarios
	{
		printf("N�o h� aliquota");
	}
	else if(salario < 2826.65)
	{
		printf("A aliquota � de 7,5%!");
	}
	else if(salario < 3751.05)
	{
		printf("A aliquota � de 15%!");
	}
	else if(salario < 4664.6)
	{
		printf("A aliquota � de 22,5%!");
	}
	else if(salario < 9999999999)  // esse caso para definir o maior n�mero possivel, para que possa digitar depois do if anterior usando apenas o sinal menor
	{
		printf("A aliquota � de 27,5%!");
	}
}
