#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    /*Fa�a um programa que, dado um conjunto de N n�meros, determine o menor
      valor, o maior valor e a soma dos valores. O final da digita��o de dados deve
      ser dada quando o usu�rio digitar 0 (zero).
      Altere o programa anterior para que ele aceite apenas n�meros entre 0 e 1000
    */

    int num=1, soma, maior=-9999999, menor=9999999, i;

    for(i=1; num != 0 ; i++ ){
        system("color 2");
        printf("%d - Digite n�meros de 1 a 1000 e aperte 0 para receber a soma: ",i);
        scanf("%d",&num);
        soma = soma + num;

        if(num < 0 || num > 1000){
            soma = soma - num;
            system("color 4");
            printf("--------------!N�mero invalido!--------------\n");
            system("pause");

        }
        else if(num > maior){
            maior = num;
        }
        else if(num < menor && num != 0){
            menor = num;
        }

    }
    printf("A soma dos n�meros digitados �: %d\n",soma);
    printf("O maior n�mero digitado �: %d\n",maior);
    printf("O menor n�mero digitado �: %d\n",menor);
}

