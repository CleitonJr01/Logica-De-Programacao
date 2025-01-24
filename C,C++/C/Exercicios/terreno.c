#include <stdio.h>
#include <string.h>

int main(){

    double area,larg,comp,met,prec;

    printf("Digite a largura do terreno: ");
    scanf("%lf",&larg);
    printf("Digite o comprimento do terreno: ");
    scanf("%lf",&comp);
    printf("Digite o valor do metro quadrado: ");
    scanf("%lf",&met);

    area = larg * comp;
    prec = area * met;

    printf("\nArea do terreo = %.2lf\n",area);
    printf("Preco do terreno = %.2lf\n",prec);

    return 0;
}