#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   setlocale(LC_ALL, "");
   /*Numa faculdade, os alunos com média pelo menos 7,0 são aprovados, aqueles com média
    inferior a 3,0 são reprovados e os demais ficam de recuperação. Dadas as duas notas de um
    aluno, calcule sua média (média aritmética simples) e informe sua situação. Apresente como
    saída a nota média calculada e as mensagens relativas a situação final do aluno, a saber
    “Aprovado”, “Reprovado” ou “Recuperação”, respectivamente.*/

    float nota1, nota2, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if(media >= 7)
    {
        printf("A sua média foi %.2f \nVocê foi Aprovado!!",media);
    }
    else if(media <= 3)
    {
        printf("A sua média foi %.2f \nVocê esta Reprovado!!",media);
    }
    else
    {
        printf("A sua média foi %.2f\nVocê está de recuperação!!",media);
    }
}
