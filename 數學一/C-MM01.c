#include <stdio.h>
#include <stdlib.h>

int main(){
    float up, low, height;
    float sum;
    scanf("%f %f %f",&up ,&low ,&height);
    sum =(up + low) * height / 2;
    printf("Trapezoid area:%.1f\n",sum);
}