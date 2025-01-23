#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    double salario,altura;
    char genero;
    char nome[50];

    idade = 16;
    salario = 5800;
    altura = 1.70;
    genero = 'M';
    strcpy(nome, "Cleiton");

    printf("GENERO = %c\n", genero);
    printf("IDADE = %d\n", idade);
    printf("SALARIO = %.2lf\n", salario);
    printf("NOME = %s\n", nome); 
    printf("ALTURA = %.2lf\n", altura);


    return 0;
}