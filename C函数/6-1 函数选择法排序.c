#include <stdio.h>
void fun(int a[],int n);
int main()
{
    int i,a[10]={3,7,5,1,2,8,6,4,10,9};
    fun(a,10);
    for(i=0;i<10;i++)
        printf("%3d",a[i]);
    return 0;
}

/* 请在这里填写答案 */
void fun(int a[],int n)
{
    int i,j,t;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                t=a[i];a[i]=a[j];a[j]=t;
            }
        }
    }
}