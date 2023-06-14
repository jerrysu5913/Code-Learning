#include <stdio.h>

int main(){
    int w,fee;
    scanf("%d",&w);
    if(w<=10) fee=2*w;
    else fee=2*10+3*(w-10);
    printf("%d\n",fee);
}
