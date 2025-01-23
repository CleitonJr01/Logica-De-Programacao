#include <stdio.h>
#include <string.h>

int main(){

    int idade;
    double salario;
    char nome[50];
    char sexo;

    idade = 17;
    strcpy(nome,"Cleiton");
    salario = 5000;
    sexo = 'M';

    printf("O funcionario %s, sexo %c, ganha %.2lf, e tem %i anos\n",nome ,sexo ,salario ,idade);

    return 0;
}