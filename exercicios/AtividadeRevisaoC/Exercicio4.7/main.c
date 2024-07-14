#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*A série de Fibonacci é 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... Os dois primeiros termos são iguais a 1 e,
    a partir do terceiro, o termo é dado pela soma dos dois termos anteriores.
    Dado um número n >= 3, exiba os números da série de Fibonacci até n.
    Por exemplo: n = 21, resultado = 1, 1, 2, 3, 5, 8, 13, 21*/

    int contador = 0, numero1 = 1, numero2 = 1, n;
    printf("Digite um numero para ser calculado na serie de Fibonacci: ");
    scanf("%d", &n);

    printf("%d %d ",numero1, numero1 );
    while(contador < n)
        {
            contador++;
            numero1 = numero2;
            numero2 = contador;
            printf("%d ", contador);

        }

}
