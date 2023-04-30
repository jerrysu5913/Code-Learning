#include <stdio.h>
int n;
int Peach(int day);
int main ()
{
    scanf("%d", &n);
    printf("%d\n", Peach(1));
    return 0;
}

/* 请在这里填写答案 */
int Peach(int day)
{
    if (day == n)
        return 1;
    else
        return (Peach(day + 1) + 1) * 2;
}