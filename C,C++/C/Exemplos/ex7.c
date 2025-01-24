#include <stdio.h>
#include <string.h>

int main(){

    int hora;

    printf("Que horas sao: ");
    scanf("%d",&hora);

    if (hora < 12 && hora > 5){
        printf("Bom dia");
    } else if (hora > 12 && hora < 18){
        printf("Boa tarde");
    } else{
        printf("Boa noite");
    }

    return 0;
}