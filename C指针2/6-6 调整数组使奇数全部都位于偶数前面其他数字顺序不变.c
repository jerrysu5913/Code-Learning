#include <stdio.h>
#include <string.h>
void   fun ( char  s[  ] );

int main()
{
    char    str[21];
    gets(str);
    fun(str);
    puts(str);
    return 0;

}

/* 你提交的代码将被嵌在这里 */
void fun (char s[])
{
    int i,j;
    char temp;
    for(i=0;i<strlen(s);i++)
    {
        for(j=0;j<strlen(s)-i-1;j++)
        {
            if(s[j]%2==0&&s[j+1]%2==1)
            {
                temp=s[j];
                s[j]=s[j+1];
                s[j+1]=temp;
            }
        }
    }
}