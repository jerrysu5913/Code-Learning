#include <stdio.h>

int main(){
    int n,sum=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        sum+=a[i];
    }
    double ave;
    ave=(double)sum/n;
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>ave) count++;
    }
    printf("%.2lf\n%d\n",ave,count);
}
