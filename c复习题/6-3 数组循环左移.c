void ArrayShift( int a[], int n, int m ){
    int t;
    for(int i=0;i<m;i++)
    {
        t=a[0];
        for(int j=0;j<n-1;j++){
            a[j]=a[j+1];
        }
        a[n-1]=t;
    }
}
