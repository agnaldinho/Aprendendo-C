#include <stdio.h>

    /*
    Ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma
    empresa. Sabendo-se que ele recebe uma comissão de 3% sobre o total
    das vendas até R$ 1.500,00 mais 5% sobre o que ultrapassar este valor,
    calcular e escrever o seu salário total.
    */


void main(){
	float salario, comissao;
	printf("digite seu salario mensal: ");
	scanf("%f",&salario);
	
	printf("digite o valor da venda efetuada: ");
	scanf("%f",&comissao);
	
	if(salario<=1500){
		comissao = comissao * 0.03 + salario;
		printf("seu salario total vai ser de: %.2f reias",comissao);
	}else if(salario>1500){
		comissao = comissao * 0.05 + salario;
		printf("seu salario total vai ser de: %.2f reais",comissao);
	}
	
	
	
	
	
}
