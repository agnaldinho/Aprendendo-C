#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
 
typedef struct Aluno
{
    int codigo;
    char nome[200];
    float nota;
} Aluno;
 
Aluno aluno_especial;
 
void menu();
void inicializar();
void imprimir();
void cadastrar();
 
int main()
{
    setlocale(LC_ALL,"portuguese");
    menu();
    return 0;
}
 
void menu()
{
    int opcao;
    do
    {
        printf(" \n Op��es: ");
        printf(" \n 1. Inicializar a Estrutura" );
        printf(" \n 2. Imprimir a Estrutura" );
        printf(" \n 3. Cadastrar Aluno Especial" );
        printf(" \n 4. Para sair. \n " );
        printf(" \n Digite a op��o desejada: ");
        scanf("%d%*c", &opcao);
        switch(opcao)
        {
            case 1:
                inicializar();
            break;
            case 2:
                imprimir();
            break;
            case 3:
                cadastrar();
            break;   
            default:
                 printf(" \n Op��o n�o existente. ");
            break;
        }
    }
    while(opcao!=4);
}
 
void inicializar()
{
    aluno_especial.codigo = 0;
    strcpy(aluno_especial.nome, "NULL");
    aluno_especial.nota = 0.0;
}
 
void cadastrar()
{
    printf(" Digite o c�digo do aluno especial: ");
    scanf("%d", &aluno_especial.codigo);
    printf(" Digite o nome do aluno especial: ");
    scanf("%s", &aluno_especial.nome);
    printf(" Digite a nota do aluno especial: ");
    scanf("%f", &aluno_especial.nota);
}
 
void imprimir()
{
    printf(" \n O c�digo do aluno especial �: %d ", aluno_especial.codigo);
    printf(" \n O nome do aluno especial �: %s ", aluno_especial.nome);
    printf(" \n A nota do aluno especial �: %.2f ", aluno_especial.nota);
    printf(" \n \n");
}
