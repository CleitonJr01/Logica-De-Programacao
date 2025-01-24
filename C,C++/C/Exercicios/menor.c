#include <stdio.h>
#include <string.h>

int main(){

    int N,i,menor;

    printf("Quantos numeros serao digitados: ");
    scanf("%d",&N);

    int vet[N];

        for ( i = 0; i < N; i++){
            printf("Digite um numero: ");
            scanf("%d",&vet[i]);
        }

        menor = vet[0];
        for (i = 0; i < N; i++){
            if (vet[i] < menor){
                menor = vet[i];
            }
        }

        printf("MENOR = %d",menor);

    return 0;
}