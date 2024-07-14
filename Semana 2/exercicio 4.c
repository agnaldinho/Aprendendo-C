#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
/*Capture dois números do usuário e, utilizando um Switch-Case, escolha qual operação uma  calculadora  irá  realizar.  O  valor  dentro  do  Switch 
 também  é  informado  pelo usuário, onde:•0 representa a soma;•1 representa a subtração;•2 representa a multiplicação e;•3 representa a divisão.*/

void main(){
    int numero1, numero2, operacao, resultado;
    setlocale(LC_ALL,"");
    printf("Digite a operação que você quer \n•0 representa a soma;\n•1 representa a subtração;\n•2 representa a multiplicação e;\n•3 representa a divisão.\n: ");
    scanf("%d",&operacao);
	printf("Digite o primeiro número: ");
    scanf("%d",&numero1);
    printf("Digite o segundo número: ");
    scanf("%d",&numero2);
    
      switch (operacao)
  {
    case 0 :
    resultado = numero1 + numero2;
    printf("A soma entre %d + %d é %d", numero1, numero2, resultado);
    break;
    
    case 1 :
    resultado = numero1 - numero2;
	printf ("A subtração entre %d - %d é %d\n", numero1, numero2, resultado);
    break;
    
    case 2 :
    resultado = numero1 * numero2;
	printf ("A multiplicação entre %d X %d é %d\n", numero1, numero2, resultado);
    break;
    
    case 3 :
    resultado = numero1 / numero2;
	printf ("A divisao entre %d / %d é %d\n", numero1, numero2, resultado);
    break;
	
}
}
