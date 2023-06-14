#include <stdio.h>

int main(){
    int number=1,sum,t,expect,dig,count=1;
    scanf("%d",&expect);
    while(number!=1000){
        sum=0;
        t=number;
        while (t!=0){
        dig=t%10;
        sum+=dig;
        t/=10;
        }
        if(sum==expect){
            printf("%8d",number);
            if(count%6==0) printf("\n");
            count++;
        }
        number++;
    }
    return 0;
}
