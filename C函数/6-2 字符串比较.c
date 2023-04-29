#include "stdio.h"
#include "string.h"
int fun(char a[],char b[]);
int  main()
{int t;
    char s1[40],s2[40];
    gets(s1);  gets(s2);
    t=fun(s1,s2);
    printf("%d\n",t);
    return 0;
}


/* 请在这里填写答案 */
int fun(char a[],char b[])
{
    int i=0;
    while(a[i]!='\0'&&b[i]!='\0')
    {
        if(a[i]>b[i])
            return 1;
        else if(a[i]<b[i])
            return -1;
        i++;
    }
    if(a[i]=='\0'&&b[i]=='\0')
        return 0;
    else if(a[i]=='\0')
        return -1;
    else
        return 1;
}