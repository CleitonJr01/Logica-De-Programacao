#include <stdio.h>
#include <string.h>

int main(){

    int N,x,i,soma;

    printf("Quantos numeros serao digitados: ");
    scanf("%d",&N);

    soma = 0;
    for (i = 1; i <= N; i++){
        printf("Digite um numero: ");
        scanf("%d",&x);
        soma = soma + x;
    }

    printf("SOMA = %d\n",soma);

    return 0;
}