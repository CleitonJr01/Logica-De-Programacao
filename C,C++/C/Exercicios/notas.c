#include <stdio.h>
#include <string.h>

int main(){

    double n1,n2,nf;

    printf("DIGITE A PRIMEIRA NOTA: ");
    scanf("%lf",&n1);
    printf("DIGITE A SEGUNDA NOTA: ");
    scanf("%lf",&n2);

    nf = n1+n2;

    printf("NOTA FINAL = %.1lf\n",nf);

    if (nf < 60){
        printf("REPROVADO");
    }else{
        printf("APROVADO");
    }
    

    return 0;
}