#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b;
    scanf("%d %d",&a ,&b);
    if(a == 0 && b == 0)
    printf("Origin");
    if(a == 0 && b != 0)
    printf("y-axis");
    if(b == 0 && a != 0)
    printf("x-axis");
    if(a > 0 && b > 0)
    printf("1st Quadrant");
    if(a < 0 && b > 0)
    printf("2nd Quadrant");
    if(a < 0 && b < 0)
    printf("3rd Quadrant");
    if(a > 0 && b < 0)
    printf("4th Quadrant");
    printf("\n");
    return 0;
}