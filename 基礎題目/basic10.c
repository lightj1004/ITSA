#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    scanf("%d %d",&a ,&b);
    if(a < b){
        c = a;
        a = b;
        b = c;
    }
    for(int i = 1;i <= 50;i++){
        if(a % b > 0){
            c = a % b;
            a = b;
            b = c;
        }
        else
        break;
        
    }
    printf("%d\n",b);
    return 0;
}