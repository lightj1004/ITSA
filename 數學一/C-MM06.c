#include <stdio.h>
#include <stdlib.h>

int main(){
    int a;
    double b, c;
    scanf("%d",&a);
    b = a * 1.6;
    c = (b * 10)/ 1;
    if(0.6 > (b * 10) - c && (b * 10) - c >= 0.5){
        printf("%.1lf\n",a * 1.6 + 0.1);
    }
    else{
        printf("%.1lf\n",a * 1.6);
    }
    return 0;
}