#include <stdio.h>

double Climb(int step);

int main()
{
    int n;
    scanf("%d", &n);
    printf("%g\n", Climb(n));
    return 0;
}

/* 你提交的代码将被嵌在这里 */
double Climb(int step)
{
    if (step <= 0)
        return 0;
    if (step == 1)
        return 1;
    if (step == 2)
        return 2;
    if (step == 3)
        return 4;
    return Climb(step - 1) + Climb(step - 2) + Climb(step - 3);
}