#include <stdio.h>
#include <string.h>

int main(){

    int x,y,resultado;

    printf("Qual o primeiro numero? \n");
    scanf("%i", &x);
    printf("Qual o segundo numero? \n");
    scanf("%i", &y);

    resultado = x* y;

    printf("O resultado e %i", resultado);

    return 0;
}