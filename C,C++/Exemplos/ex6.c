#include <stdio.h>
#include <string.h>

void limpar_entrada() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int idade1,idade2;
    char nome1[50], nome2[50];
 
    printf("Qual a idade da Pessoa 1: ");
    scanf("%d",&idade1);
    printf("Qual o nome da Pessoa 1: ");
    limpar_entrada();
    fgets(nome1,50,stdin);
    strtok(nome1,"\n");

    printf("Qual a idade da Pessoa 2: ");
    scanf("%d",&idade2);
    printf("Qual o nome da Pessoa 2: ");
    limpar_entrada();
    fgets(nome2,50,stdin);
    strtok(nome2,"\n");

    printf("NOME1 = %s\n",nome1);
    printf("IDADE1 = %d\n",idade1);

    printf("NOME2 = %s\n",nome2);
    printf("IDADE2 = %d\n",idade2);

    return 0;
}