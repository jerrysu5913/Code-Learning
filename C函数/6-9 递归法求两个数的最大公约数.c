#include <stdio.h>
int  gys(int m,int n);
int main()
{
    int m,n;
    scanf("%d%d",&m,&n);
    printf("%d\n",gys(m,n));
    return 0;
}


/* 请在这里填写答案 */
int  gys(int m,int n)
{
    if(m%n==0)
        return n;
    else
        return gys(n,m%n);
}