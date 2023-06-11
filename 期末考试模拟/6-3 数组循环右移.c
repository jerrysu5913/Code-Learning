#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void ArrayShift( int a[], int n, int m ){
    if(m>n) m=m%n;
    int b[m],i,j,k;
    for(i=n-m,j=0;i<n;i++,j++){
        b[j]=a[i];
    }
    for(i=n-m-1;i>=0;i--){
        a[i+m]=a[i];
    }
    for(i=0;i<m;i++){
        a[i]=b[i];
    }
}