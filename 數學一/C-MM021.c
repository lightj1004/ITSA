#include <stdio.h>
#include <stdlib.h>

int main(){
    long a ,b = 1;
    scanf("%ld",&a);
    for(int i = 1;i <= a;i++)
    b = b * i;
    printf("%ld\n",b);
    return 0;
}