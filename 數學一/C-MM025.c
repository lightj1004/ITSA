#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b = 0;
    scanf("%d",&a);
    for(int i = a;i >= 1;i--){
        if(i % 3 == 0)
        b = b + i;
    }
    printf("%d\n",b);
    return 0;
}