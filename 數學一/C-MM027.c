#include <stdio.h>
#include <stdlib.h>

int main(){
    long a ,b ,c;
    scanf("%ld %ld",&a ,&b);
    if(a < b){
        c = a;
        a = b;
        b = c;
    }
    c = 0;
    for(int i = b;i <= a;i++){
        c = c + i;
    }
    printf("%ld\n",c);
    return 0;
}