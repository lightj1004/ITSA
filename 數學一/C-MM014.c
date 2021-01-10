#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,d ,h ,m ,s;
    scanf("%d",&a);
    d = a / 86400;
    a = a % 86400;
    h = a / 3600;
    a = a % 3600;
    m = a / 60;
    a = a % 60;
    printf("%d days\n",d);
    printf("%d hours\n",h);
    printf("%d minutes\n",m);
    printf("%d seconds\n",a);
    return 0;
}