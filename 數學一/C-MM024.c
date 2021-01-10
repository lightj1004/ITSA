#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b;
    double money = 0;
    scanf("%d %d",&a ,&b);
    if(a <= 60)
    money = a * b;
    if(a > 60 && a <= 120)
    money = (a - 60) * b * 1.33 + 60 * b;
    if(a > 120)
    money = (a - 120) * b * 1.66 + 60 * b * 1.33 + 60 * b;
    printf("%0.1lf\n",money);
    return 0;
}