#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <conio.h>
/*Capture dois n�meros do usu�rio e, utilizando um Switch-Case, escolha qual opera��o uma  calculadora  ir�  realizar.  O  valor  dentro  do  Switch 
 tamb�m  �  informado  pelo usu�rio, onde:�0 representa a soma;�1 representa a subtra��o;�2 representa a multiplica��o e;�3 representa a divis�o.*/

void main(){
    int numero1, numero2, operacao, resultado;
    setlocale(LC_ALL,"");
    printf("Digite a opera��o que voc� quer \n�0 representa a soma;\n�1 representa a subtra��o;\n�2 representa a multiplica��o e;\n�3 representa a divis�o.\n: ");
    scanf("%d",&operacao);
	printf("Digite o primeiro n�mero: ");
    scanf("%d",&numero1);
    printf("Digite o segundo n�mero: ");
    scanf("%d",&numero2);
    
      switch (operacao)
  {
    case 0 :
    resultado = numero1 + numero2;
    printf("A soma entre %d + %d � %d", numero1, numero2, resultado);
    break;
    
    case 1 :
    resultado = numero1 - numero2;
	printf ("A subtra��o entre %d - %d � %d\n", numero1, numero2, resultado);
    break;
    
    case 2 :
    resultado = numero1 * numero2;
	printf ("A multiplica��o entre %d X %d � %d\n", numero1, numero2, resultado);
    break;
    
    case 3 :
    resultado = numero1 / numero2;
	printf ("A divisao entre %d / %d � %d\n", numero1, numero2, resultado);
    break;
	
}
}
