#include <stdio.h>

int main(){
    int n,min_index,max_index,t;
    scanf("%d",&n);
    int num[n];
    for(int i=0;i<n;i++) scanf("%d",&num[i]);
    for(int j=0;j<n;j++){
        min_index=j;
        for(int k=0;k<j;k++){
            if(num[min_index]>num[k]){
                min_index=k;
            }
        }
    }
    for(int l=0;l<n;l++){
        max_index=l;
        for(int m=0;m<l;m++){
            if(num[max_index]<num[m]){
                max_index=m;
            }
        }
    }
    t=num[0];
    num[0]=num[min_index];
    num[min_index]=t;
    for(int i=0;i<n;i++) scanf("%d",&num[i]);
    for(int j=0;j<n;j++){
        min_index=j;
        for(int k=0;k<j;k++){
            if(num[min_index]>num[k]){
                min_index=k;
            }
        }
    }
    for(int l=0;l<n;l++){
        max_index=l;
        for(int m=0;m<l;m++){
            if(num[max_index]<num[m]){
                max_index=m;
            }
        }
    }
    t=num[n-1];
    num[n-1]=num[max_index];
    num[max_index]=t;
    for(int p=0;p<n;p++){
        printf("%d ",num[p]);
    }
    return 0;
}
