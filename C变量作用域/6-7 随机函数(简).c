#include <stdio.h>

int Rand0();

int main()
{
    int n;
    scanf("%d", &n);
    while (n--)
    {
        printf("%d\n", Rand0());
    }
    return 0;
}

/* 你提交的代码将被嵌在这里 */
int Rand0()
{
    static int r = 0;
    r = (25173 * r + 13849) % 65536;
    return r;
}