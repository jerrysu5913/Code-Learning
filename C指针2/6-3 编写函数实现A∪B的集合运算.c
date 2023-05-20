#include <stdio.h>

void Union(int *A,int *B,int*C,int Asize,int Bsize,int *Csize);

void display(int *T,int p)
{
    int i;
    printf("%d",p);
    if(p>0)
    {
        for(i=0;i<p-1;i++)
            printf(" %d",T[i]);
        printf(" %d\n",T[i]);
    }
}
void read(int *B,int size)
{
    int i;
    for(i=0;i<size;i++)
        scanf("%d",&B[i]);
}
int main()
{
    int a[100],b[100],c[200];
    int m,n,o=0;
    scanf("%d",&m);
    read(a,m);
    scanf("%d",&n);
    read(b,n);
    Union(a,b,c,m,n,&o);
    display(c,o);
    return 0;
}

/***你编写的函数将放在这里***/
void Union(int *A,int *B,int *C,int m,int n,int *o)
{
    int i,j,k;
    for(i=0;i<m;i++)
        C[i]=A[i];
    for(j=0;j<n;j++)
    {
        for(k=0;k<m;k++)
        {
            if(B[j]==A[k])
                break;
        }
        if(k==m)
            C[i++]=B[j];
    }
    *o=i;
}