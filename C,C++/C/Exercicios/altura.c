#include <stdio.h>
#include <string.h>

void limpar_entrada() {
 char c;
 while ((c = getchar()) != '\n' && c != EOF) {}
}

int main(){

    int N,i,cont;
    double med,somaalt,porc;

    printf("Quantas pessoas serao digitadas?: ");
    scanf("%d",&N);

    char nome[N] [50];
    int idade[N];
    double altura[N];

    for (i = 0; i < N; i++){
        printf("Dados da %da pessoa:\n", i+1);
        printf("NOME: ");
        limpar_entrada();
        fgets(nome[i],50,stdin);
        strtok(nome[i],"\n");

        printf("IDADE: ");
        scanf("%d",&idade[i]);

        printf("ALTURA: ");
        scanf("%lf",&altura[i]);
    }
    
    somaalt = 0;
    for (i = 0; i < N; i++){
        somaalt = somaalt + altura[i];
    }
    
    med = somaalt / N;
    printf("\nAltura media = %.2lf\n",med);
    
    cont = 0;
    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            cont = cont + 1;
        }
    }
    
    porc = ((double)cont/N) * 100.0;
    printf("Pessoas com menos de 16 anos: %.1lf%%\n",porc);

    for (i = 0; i < N; i++){
        if (idade[i] < 16){
            printf("%s\n",nome[i]);
        }
    }
    

    return 0;
}