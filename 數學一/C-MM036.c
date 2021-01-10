#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    scanf("%d",&a);
    if(a <= 5 && a >= 3)
    printf("Spring");
    if(a <= 8 && a >= 6)
    printf("Summer");
    if(a <= 11 && a >= 9)
    printf("Autumn");
    if(a <= 2 || a >= 12)
    printf("Winter");
    printf("\n");
    return 0;
}