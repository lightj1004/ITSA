#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ;
    scanf("%d %d",&a ,&b);
    printf("%d\n",a * a + 2 * a * b + b * b);
    return 0;
}