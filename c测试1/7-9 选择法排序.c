#include <stdio.h>

int main(){
    int n, t;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++){
        scanf("%d",&num[i]);
    }
    for(int j=n-1;j>=0;j--){
        int min_index = j;
        for(int k=j-1;k>=0;k--){
            if(num[k] < num[min_index]){
                min_index = k;
            }
        }
        if(min_index != j){
            t = num[j];
            num[j] = num[min_index];
            num[min_index] = t;
        }
    }
    for(int m=0;m<n;m++){
        if(m!=0) printf(" ");
        printf("%d",num[m]);
    }
    return 0;
}
