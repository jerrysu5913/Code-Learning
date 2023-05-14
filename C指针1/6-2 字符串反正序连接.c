#include <stdio.h>
void fun (char *s, char *t);
int main()
{ char s[100], t[100];
    scanf("%s", s);
    fun(s, t);
    printf("%s\n", t);
    return 0;
}

/* 请在这里填写答案 */
void fun (char *s, char *t)
{
    int i = 0,j = 0;
    while(s[i] != '\0')
    {
        i++;
    }
    i--;
    while(i >= 0)
    {
        t[j] = s[i];
        i--;
        j++;
    }
    i=0;
    while(s[i] != '\0')
    {
        t[j] = s[i];
        i++;
        j++;
    }
    t[j] = '\0';
}