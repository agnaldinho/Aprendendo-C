#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
setlocale(LC_ALL,"");
    /*Desenvolver um programa para verificar a nota do aluno em uma prova com 10
    questões, o programa deve perguntar ao aluno a resposta de cada questão e
    ao final comparar com o gabarito da prova e assim calcular o total de acertos e
    a nota (atribuir 1 ponto por resposta certa). Após cada aluno utilizar o sistema
    deve ser feita uma pergunta se outro aluno vai utilizar o sistema. Após todos os
    alunos terem respondido informar:
    a) Maior e Menor Acerto;
    b) Total de Alunos que utilizaram o sistema;
    c) A Média das Notas da Turma.*/
    
    int a, b, c, d, e, nota, cont = 0;
    char gabarito[] = {'a', 'b', 'c', 'd','e'};
    a=b=c=d=e=0;
    
    while(cont<10){
    	cont++;
    	printf("Questao %d - Digite a resposta: ",cont);
    	scanf("%c",&gabarito);
    	
    	if(gabarito == 'a'){
    		a = gabarito + 1;
		}else if(gabarito == 'b');
		    b = gabarito + 1;
	}
	printf("Total de acerto %d",a);
}

