#include <math.h>
int fn( int a, int n ){
    int b=0;
    while(n!=0){
        b+=a*pow(10,n-1);
        n--;
    }
    return b;
}
int SumA( int a, int n ){
    int sum=0;
    while(n!=0){
        sum+=fn(a,n);
        n--;
    }
    return sum;
}
