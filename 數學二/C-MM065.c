#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c ,d;
    scanf("%d,%d,%d,%d",&a ,&b ,&c ,&d);
    a = a - 15 * b - 20 * c - 30 * d;
    if(a < 0)
    printf("0\n");
    else{
        b = a / 50;
        a = a % 50;
        c = a / 5;
        a = a % 5;
        printf("%d,%d,%d",a,c,b);
        printf("\n");
    }
    return 0;
}