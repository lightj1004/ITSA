#include <stdio.h>
#include <stdlib.h>

int main(){
    int a ,b;
    scanf("%d %d",&a ,&b);
    if(a == 1 && b >= 21 ){
        printf("Aquarius");
    }
    if(a == 2 && b <= 18 ){
        printf("Aquarius");
    }
    if(a == 2 && b >= 19 ){
        printf("Pisces");
    }
    if(a == 3 && b <= 20 ){
        printf("Pisces");
    }
    if(a == 3 && b >= 21 ){
        printf("Aries");
    }
    if(a == 4 && b <= 20 ){
        printf("Aries");
    }
    if(a == 4 && b >= 21 ){
        printf("Taurus");
    }
    if(a == 5 && b <= 21 ){
        printf("Taurus");
    }
    if(a == 5 && b >= 22 ){
        printf("Gemini");
    }
    if(a == 6 && b <= 21 ){
        printf("Gemini");
    }
    if(a == 6 && b > 21 ){
        printf("Cancer");
    }
    if(a == 7 && b <= 22 ){
        printf("Cancer");
    }
    if(a == 7 && b >= 23 ){
        printf("Leo");
    }
    if(a == 8 && b <= 23 ){
        printf("Leo");
    }
    if(a == 8 && b >= 24 ){
        printf("Virgo");
    }
    if(a == 9 && b <= 23 ){
        printf("Virgo");
    }
    if(a == 9 && b >= 24 ){
        printf("Libra");
    }
    if(a == 10 && b <= 23 ){
        printf("Libra");
    }
    if(a == 10 && b >= 24 ){
        printf("Scorpio");
    }
    if(a == 11 && b <= 22 ){
        printf("Scorpio");
    }
    if(a == 11 && b >= 23 ){
        printf("Sagittarius");
    }
    if(a == 12 && b <= 21 ){
        printf("Sagittarius");
    }
    if(a == 12 && b >= 22 ){
        printf("Capricorn");
    }
    if(a == 1 && b < 21 ){
        printf("Capricorn");
    }
    printf("\n");
    return 0;
}