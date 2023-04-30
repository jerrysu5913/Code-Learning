#include <stdio.h>
void fun(int a[]);
int main()
{
    int a[8]={1,2,3,4,5,6,7,8},i,j;
    fun(a);
    for(i=0;i<8;i++)
        printf("%3d",a[i]);
    printf("\n");
    return 0;
}

/* 请在这里填写答案 */
void fun(int a[])
{
    int i,j;
    int temp[3];
    for(i=0;i<3;i++)
        temp[i]=a[i];
    for(i=0;i<5;i++)
        a[i]=a[i+3];
    for(i=5,j=0;i<8;i++,j++)
        a[i]=temp[j];
}