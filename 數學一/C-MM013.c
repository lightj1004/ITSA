#include <stdio.h>
#include <stdlib.h>

int main(){
    int sh ,sm ,eh ,em;
    int st ,et ,total;
    int money = 0;
    scanf("%d %d",&sh ,&sm);
    scanf("%d %d",&eh ,&em);
    st = sh * 60 + sm;
    et = eh * 60 + em;
    total = et - st;
    if(total <= 120){
        money = (total / 30) * 30;
    }
    else if(total > 120 && total <= 240){
        money = ((total - 120) / 30) * 40 + 120;
    }
    else if(total > 240){
        money = ((total - 240) / 30) * 60 + 280;
    }
    printf("%d\n",money);
    return 0;
}