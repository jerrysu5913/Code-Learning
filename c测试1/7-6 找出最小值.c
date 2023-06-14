#include <stdio.h>

int main(){
    int n,number,min,t;
    scanf("%d",&n);
    scanf("%d",&min);
    for(int i=0;i<n;i++){
        scanf("%d",&number);
        if(min>number) min=number;
    }
    printf("min = %d",min);
}
