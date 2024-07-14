#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
/*O IMC é utilizado para indicar a situação correspondente ao peso de uma pessoa. Faça um programa que capture a altura de uma pessoa e seu peso, 
a partir disto informe qual a sua situação.•Equação:IMC = peso / (altura * altura)
•IMC abaixo de 17 significa “muito abaixo do peso”•IMC entre 17 e 18,49 significa “abaixo do peso”•IMC entre 18,5 e 24,99 significa “peso normal”
•IMC entre 25 e 29,99 significa “acima do peso”•IMC entre 30 e 34,99 significa “obesidade I”•IMC entre 35 e 39,99 significa “obesidade II”
•IMC acima de 40 significa “obesidade III” */

void main(){
	float peso, altura, imc;
	setlocale(LC_ALL,"");
	printf("Digite seu peso: ");
	scanf("%f",&peso);
	printf("Digite sua altura: ");
	scanf("%f",&altura);
	
	imc = peso / (altura* altura); // definindo a conta que ira fazer o imc
	
	if(imc < 17)
	printf("Muito abaixo do peso!!!"); // colocando os valores dos imc, conforme o resultado ver se é abaixo do peso, peso normal, etc.
	else if(imc > 17 && imc <= 18.49)	
	printf("Abaixo do peso!!!");
	else if(imc >= 18.5 && imc <= 24.99)
	printf("Peso normal!");
	else if(imc >= 25 && imc <= 29.99)
	printf("Acima do peso!!!");
	else if(imc >= 30 && imc <= 34.99)
	printf("obedidade 1!!!");
    else if(imc >= 35 && imc <= 39.99)
    printf("Obesidade 2!!!");
    else if(imc > 40)
    printf("Obesidade 3!!!");
}

