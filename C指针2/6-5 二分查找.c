#include<stdio.h>
#define N 20
int Search(int *pa, int n, int k,int *p);
int main()
{
    int a[N],n,cmp,*p=&cmp;
    int pos,num=0;
    int i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    scanf("%d",&k);
    pos=Search(a,n,k,p);
    printf("%d\n%d\n",pos,cmp);
    return 0;
}

/* 请在这里填写答案 */
int Search(int *pa, int n, int k,int *p)
{
    int low=0,high=n-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(k==pa[mid])
        {
            *p=*p+1;
            return mid;
        }
        else if(k<pa[mid])
        {
            *p=*p+1;
            high=mid-1;
        }
        else
        {
            *p=*p+1;
            low=mid+1;
        }
    }
    return -1;
}