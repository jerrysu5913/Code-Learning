#include <stdio.h>

double Cmb(int x, int y);

int main()
{
    int m, n;
    scanf("%d%d", &m, &n);
    printf("%.10g\n", Cmb(m, n));
    return 0;
}

/* 你提交的代码将被嵌在这里 */
/*
 * 要求：不要使用循环语句，不调用阶乘函数和排列数函数。找出递推公式，该函数直接调用自己求得结果。
 */

double Cmb(int x, int y)
{
    if (y == 0 || y == x)
        return 1;
    if (y == 1 || y == x - 1)
        return x;
    return Cmb(x - 1, y - 1) + Cmb(x - 1, y);
}
//Waiting for edit……