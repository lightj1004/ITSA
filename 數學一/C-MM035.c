#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c;
    scanf("%d",&a);
    if(a % 400 == 0)
    printf("Bissextile Year");
    else if(a % 4 == 0 && a % 100 != 0)
    printf("Bissextile Year");
    else
    printf("Common Year");
    printf("\n");
    return 0;
}