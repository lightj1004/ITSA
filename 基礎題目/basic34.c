#include <stdio.h>
#include <stdlib.h>

int main(){
    double a ,b;
    while(scanf("%lf %lf",&a ,&b) != EOF){
        if(b == 1)
        printf("%0.1lf\n",(a - 80) * 0.7);
        if(b == 2)
        printf("%0.1lf\n",(a - 70) * 0.6);
    }
    return 0;
}