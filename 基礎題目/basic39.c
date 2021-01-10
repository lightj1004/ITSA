#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b ,c ,d ,e;
    scanf("%d",&a);
    for(int i = 1;i <= a;i++){
        scanf("%d %d %d",&b ,&c ,&d);
        if(b >= 60 && c >= 60 && d >= 60 || b + c + d >= 220){
            printf("P");
        }
        else if(b + c + d < 220){
            if(b < 60 && c >= 60 && d >= 60){
                printf("M");
            }
            else if(c < 60 && b >= 60 && d >= 60){
                printf("M");
            }
            else if(d < 60 && c >= 60 && b >= 60){
                printf("M");
            }
            else if(b < 60 && c < 60 && d >= 80){
                printf("M");
            }
            else if(d < 60 && c < 60 && b >= 80){
                printf("M");
            }
            else if(b < 60 && d < 60 && c >= 80){
                printf("M");
            }
            else{
                printf("F");
            }
        }
        printf("\n");
    }
    
    return 0;
}