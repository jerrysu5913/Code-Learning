#include <stdio.h>
#include <stdlib.h>

int Sum(int num){
    int sum=0;
    while(num!=0){
        int t=num%10;
        num/=10;
        sum+=t*t;
    }
    return sum;
}
void Print(int *array,int n){
    for(int i=0;i<n;i++){
        if(i!=0) printf(" ");
        printf("%d",array[i]);
    }
    printf("\n");
}
void Scan(int *array,int n){
    for(int i=0;i<n;i++){
        scanf("%d",&array[i]);
    }
}
void Comp(int *array,int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(Sum(array[j])>Sum(array[j+1])){
                int t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }else if(Sum(array[j])==Sum(array[j+1])){
                if(array[j]>array[j+1]){
                    int k=array[j];
                    array[j]=array[j+1];
                    array[j+1]=k;
                }
            }
        }
    }
}

int main(){
    int n;
    scanf("%d",&n);
    while(n!=0){
        int array[n];
        Scan(array,n);
        Comp(array,n);
        Print(array,n);
        scanf("%d",&n);
    }
    
}
