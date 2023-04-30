#include <stdio.h>

double Pick(int n);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%g\n", Pick(n));
    return 0;
}

/* 你提交的代码将被嵌在这里 */
double Pick(int n)
{
    if (n <= 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    if (n == 4)
        return 8;
    return Pick(n - 1) + Pick(n - 2) + Pick(n - 3) + Pick(n - 4);
}