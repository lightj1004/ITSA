#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    scanf("%d",&a);
    for(int i = 1;i <= a / 35;i++){
        printf("%d",i * 35);
        if(i != a / 35)
        printf(" ");
    }
    printf("\n");
    return 0;
}