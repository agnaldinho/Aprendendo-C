#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "");
   /*Numa faculdade, os alunos com m�dia pelo menos 7,0 s�o aprovados, aqueles com m�dia
    inferior a 3,0 s�o reprovados e os demais ficam de recupera��o. Dadas as duas notas de um
    aluno, calcule sua m�dia (m�dia aritm�tica simples) e informe sua situa��o. Apresente como
    sa�da a nota m�dia calculada e as mensagens relativas a situa��o final do aluno, a saber
    �Aprovado�, �Reprovado� ou �Recupera��o�, respectivamente.*/

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7)
    {
        printf("A sua m�dia foi %.2f \nVoc� foi Aprovado!!",media);
    }
    else if(media <= 3)
    {
        printf("A sua m�dia foi %.2f \nVoc� esta Reprovado!!",media);
    }
    else
    {
        printf("A sua m�dia foi %.2f\nVoc� est� de recupera��o!!",media);
    }
}
