#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b;
    scanf("%d",&a);
    b = a * 100 / 23.8;
    if(a * 100 - b * 23.8 > 0)
    printf("%d\n",b + 1);
    else
    printf("%d\n",b);
    return 0;
}