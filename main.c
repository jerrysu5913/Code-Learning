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
    int i = 0;
    while (s[i] != '\0') {
        if (s[i] >= 'a' && s[i] <= 'z') {
            t[i] = s[i] - 32;
        } else {
            t[i] = s[i];
        }
        i++;
    }
    t[i] = '\0';
}