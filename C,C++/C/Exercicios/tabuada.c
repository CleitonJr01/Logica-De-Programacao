#include <stdio.h>
#include <string.h>

int main(){

    int x,i,val;

    printf("Deseja a tabuada para qual valor?: ");
    scanf("%d",&x);

    for (i = 1; i <= 10; i++){
        val = x * i;
        printf("%d x %d = %d\n",x,i,val);
    }
    

    return 0;
}