#include<stdio.h>
int getWordNum(char ar1[],char ch) ;
int main()
{
    char string[81],c,n;
    gets(string);
    c=getchar();
    n=getWordNum(string,c);
    printf("%d",n);
    return 0;
}

/* 请在这里填写答案 */
int getWordNum(char ar1[],char ch)
{
    int i=0,j=0,k=0;
    while(ar1[i]!='\0')
    {
        if(ar1[i]==ch||ar1[i]==ch-32||ar1[i]==ch+32)
        {
            if(ar1[i-1]==' '||i==0)
            {
                j++;
            }
        }
        i++;
    }
    return j;
}