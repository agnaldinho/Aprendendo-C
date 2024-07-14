#include <stdio.h>

void main(){
    float fat = 1, num;
    printf("Digite um fatorial para calcular: ");
    scanf("%f",&num);
    
	int i;
	for (i=num; i>1; i--){
		fat = fat*i;
	}
	printf(" %.f ! = %.f",num, fat);

}
