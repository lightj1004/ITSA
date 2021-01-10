#include <stdio.h>
#include <stdlib.h>

int main(){
    int a, b;
    scanf("%d",&a);
    b = 2;
    if(a > 31)
    printf("Value of more than 31\n");
    else if(a >= 2) {
        for(int i = 1;i < a;i++){
            b *= 2;
        }
        printf("%d\n",b);
    }
    return 0;
}