#include <stdio.h>

int sumEven(int begin, int end);

int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    printf("SumEven = %d\n",sumEven(a,b));
    return 0;
}
/********************************************/
int sumEven(int begin, int end){
    int sum=0;
    for(int i=begin;i<=end;i++){
        if(i%2==0) sum+=i;
    }
    return sum;
}