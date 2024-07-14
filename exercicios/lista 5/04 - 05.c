#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    /*Faça um programa que, dado um conjunto de N números, determine o menor
      valor, o maior valor e a soma dos valores. O final da digitação de dados deve
      ser dada quando o usuário digitar 0 (zero).
      Altere o programa anterior para que ele aceite apenas números entre 0 e 1000
    */

    int num=1, soma, maior=-9999999, menor=9999999, i;

    for(i=1; num != 0 ; i++ ){
        system("color 2");
        printf("%d - Digite números de 1 a 1000 e aperte 0 para receber a soma: ",i);
        scanf("%d",&num);
        soma = soma + num;

        if(num < 0 || num > 1000){
            soma = soma - num;
            system("color 4");
            printf("--------------!Número invalido!--------------\n");
            system("pause");

        }
        else if(num > maior){
            maior = num;
        }
        else if(num < menor && num != 0){
            menor = num;
        }

    }
    printf("A soma dos números digitados é: %d\n",soma);
    printf("O maior número digitado é: %d\n",maior);
    printf("O menor número digitado é: %d\n",menor);
}

