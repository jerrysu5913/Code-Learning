#include <stdio.h>

double Sign(double x);

int main()
{
    double x, y;
    scanf("%lg", &x);
    y = Sign(x);
    printf("%g\n", y);
    return 0;
}

/* 你的提交代码将被嵌在这里 */
double Sign(double x)
{
    if (x > 0)
        return 1;
    else if (x == 0)
        return 0;
    else
        return -1;
}