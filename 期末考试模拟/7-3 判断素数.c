#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int IsPrimeNum(int n){
    if(n<=2) return 1;
    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0) return 0;
    }
    return 1;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",IsPrimeNum(n));
    return 0;
}