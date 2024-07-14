#include <stdio.h>
#include <locale.h>

void main(){

    setlocale(LC_ALL,"");

    /*Faça um programa que leia dez conjuntos de dois valores, o primeiro
      representando o número do aluno e o segundo representando a sua altura em
      centímetros. Encontre o aluno mais alto e o mais baixo. Mostre o número do
      aluno mais alto e o número do aluno mais baixo, junto com suas alturas.
    */
    int i, numA[10] ,maior ,menor;
    float altA[10];

    for(i=0; i < 10; i++){
        printf("\n----------------------| Aluno |----------------------",i);
        printf("\nDigite seu número, em seguida sua altura: ");
        scanf("%d",&numA[i]);
        scanf("%f",&altA[i]);
    }
    maior = 0;
    menor = 0;

    for(i = 1; i < 10; i++){

        if(altA[i]>altA[maior]){
            maior = i;

        }else if(altA[i]<altA[menor]){
            menor = i;
        }
    }

    printf("\nO maior aluno é o número: %d e a altura do mesmo é: %.2f\n",numA[maior],altA[maior]);
    printf("O menor aluno é o número: %d e a altura do mesmo é: %.2f" ,numA[menor],altA[menor]);

}
