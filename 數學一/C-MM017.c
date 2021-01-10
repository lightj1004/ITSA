#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    scanf("%d %d",&a ,&b);
    if(a < b){
        c = b;
        b = a;
        a = c;
    }
    for(int i = b;i >= 1;i --){
        if(a % i == 0 && b % i == 0){
            printf("%d\n",i);
            break;
        }
    }
    return 0;
}