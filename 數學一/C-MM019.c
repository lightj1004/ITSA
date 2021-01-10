#include <stdio.h>
#include <stdlib.h>

int main(){
    double a;
    scanf("%lf",&a);
    if(a <= 800)
    a = a * 0.9;
    if(a > 800 && a < 1500)
    a = a * 0.81;
    if(a >= 1500)
    a = a * 0.9 * 0.79;
    printf("%0.1lf\n",a);
    return 0;
}