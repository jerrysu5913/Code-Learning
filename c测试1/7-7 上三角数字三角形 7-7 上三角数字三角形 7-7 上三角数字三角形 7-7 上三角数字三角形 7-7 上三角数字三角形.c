#include <stdio.h>

int main(){
    int n,k=1;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            printf("%4d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
