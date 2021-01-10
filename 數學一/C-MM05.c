#include <stdio.h>
#include <stdlib.h>

int main(){
    double a, d;
    scanf("%lf",&a);
    int c;
    d = a * a * 10;
    c = d / 1;
    if(0.6 > d - c >= 0.5)
        printf("%.1lf\n",a * a + 0.01);
    else
        printf("%.1lf\n",a*a);
    return 0;
}