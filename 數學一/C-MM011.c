#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b;
    scanf("%d",&a);
    b = a / 10;
    printf("NT10=%d\n",b);
    a = a % 10;
    b = a / 5;
    printf("NT5=%d\n",b);
    a = a % 5;
    b = a / 1;
    printf("NT1=%d\n",b);
    return 0;
}