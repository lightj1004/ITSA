#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    scanf("%d",&a);
    b = 0;
    for(int i = 1;i <= a;i++){
        printf("%d ",i);
        b += i;
        if(i != a)
        printf("+ ");
    }
    printf("= %d",b);
    printf("\n");
    return 0;
}