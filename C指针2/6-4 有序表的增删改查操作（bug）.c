}
}

/* 请在这里填写答案 */
int insert(int a[ ], int value)
{
    int i;
    for(i=0;i<Count;i++)
    {
        if(a[i]==value)
            return -1;
        if(a[i]>value)
            break;
    }
    for(int j=Count;j>i;j--)
    {
        a[j]=a[j-1];
    }
    a[i]=value;
    Count++;
    return i;
}
int del(int a[ ], int value)
{
    int i;
    for(i=0;i<Count;i++)
    {
        if(a[i]==value)
            break;
    }
    if(i==Count)
        return -1;
    for(int j=i;j<Count-1;j++)
    {
        a[j]=a[j+1];
    }
    Count--;
    return i;
}
int modify(int a[ ], int value1, int value2)
{
    int i;
    for(i=0;i<Count;i++)
    {
        if(a[i]==value1)
            break;
    }
    if(i==Count)
        return -1;
    for(int j=i;j<Count;j++)
    {
        if(a[j]==value2)
            return -1;
    }
    a[i]=value2;
    return i;
}
int query(int a[ ], int value)
{
    int left=0,right=Count-1,mid;
    while(left<=right)
    {
        mid=(left+right)/2;
        if(a[mid]==value)
            return mid;
        else if(a[mid]>value)
            right=mid-1;
        else
            left=mid+1;
    }
    return -1;
}