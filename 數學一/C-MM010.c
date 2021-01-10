#include <stdio.h>
#include <stdlib.h>

int main(){
    double a ,b;
    scanf("%lf",&a);
    b = a * 9 / 5 + 32;
    /*if(a >= 2) {
        printf("%d\n",b);
    }*/
    printf("%0.1lf\n",b);
    return 0;
}