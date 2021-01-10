#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    b = 0;
    scanf("%d",&a);
    for(int i = a - 1;i > 1;i--){
        if(a % i == 0)
        b = 1;
    }
    if(b == 1)
    printf("NO");
    else
    printf("YES");
    printf("\n");
    return 0;
}