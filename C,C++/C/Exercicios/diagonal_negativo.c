#include <stdio.h>
#include <string.h>

int main(){

    int N,i,j,contador;

    printf("Qual a ordem da Matriz: ");
    scanf("%d",&N);

    int mat[N][N];

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("ELEMENTO [%d,%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }

    printf("DIAGONAL PRINCIPAL: \n");

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (i == j){
                printf("%d ",mat[i][j]);
            }
        }
    }

    contador = 0;
    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            if (mat[i][j] < 0){
                contador++;
            }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS = %d",contador);

    return 0;
}