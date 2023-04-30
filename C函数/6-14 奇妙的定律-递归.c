#include <stdio.h>
void F(int n);
int main()
{
    int n;
    scanf("%d", &n);
    F(n);
    return 0;
}
/* 请在这里填写答案 */
void F(int n)
{
    if (n == 1)
    {
        printf("%d", n);
        return;
    }
    else
    {
        printf("%d ", n);
        if (n % 2 == 0)
        {
            F(n / 2);
        }
        else
        {
            F(n * 3 + 1);
        }
    }
}