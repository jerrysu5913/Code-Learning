#include <stdio.h>
#include <stdlib.h>

long long gcd(long long a, long long b){
    if(b==0) return a;
    return gcd(b, a%b);
}

long long lcm(long long a, long long b){
    if(a==0 || b==0) return 0;
    return llabs((a*b)/gcd(a,b));
}

int main(){
    long long a,b;
    scanf("%lld %lld",&a,&b);
    printf("%lld",lcm(llabs(a),llabs(b)));
    return 0;
}