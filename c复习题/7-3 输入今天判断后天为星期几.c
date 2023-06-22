#include <stdio.h>

int main(){
    int D;
    scanf("%d",&D);
    if(D>=1&&D<=7){
        D+=2;
        if(D>7) D-=7;
        printf("%d",D);
    }else printf("Invalid Input!");
}
