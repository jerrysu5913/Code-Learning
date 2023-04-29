#include <stdio.h>
void fun(char s[]);
int main()
{
    char item[80];
    gets(item);
    fun(item);
    printf("%s\n",item);
    return 0;
}

/* 请在这里填写答案 */
void fun(char s[])
{
    int i = 0, j = 0;
    while (s[i] != '\0')
    {
        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            s[j] = s[i];
            j++;
        }
        i++;
    }
    s[j] = '\0';
}