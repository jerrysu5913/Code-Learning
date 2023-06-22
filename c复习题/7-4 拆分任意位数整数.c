#include <stdio.h>

int main(){
    int num,temp;
    scanf("%d",&num);
    temp=num;
    while(temp!=0){
        int i;//=0;
        i=temp%10;
        temp/=10;
        printf("%d ",i);
    }
    printf("\n");
}
