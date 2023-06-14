#include <stdio.h>

int main(){
    int a,b;
    scanf("%d,%d",&a,&b);
    if(a!=0 && b!=0) {
        if(a%2==0 && b%2==0) printf("%d+%d=%d",a,b,a+b);
        else if(a%2!=0 && b%2!=0) printf("%d-%d=%d",a,b,a-b);
        else if(a%2!=0 && b%2==0) printf("%d*%d=%d",a,b,a*b);
        else if(a%2==0 && b%2!=0) printf("%d/%d=%d",a,b,a/b);
    }
    return 0;
