#include <stdio.h>
int main(){
    double x,y;
    scanf("%lf",&x);
    if(x==0) y=0;
    else y=1/x;
    printf("f(%0.1lf) = %0.1lf",x,y);
}
