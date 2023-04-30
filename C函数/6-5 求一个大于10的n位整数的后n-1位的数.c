#include <stdio.h>
int fun(int w);
int main()
{
    int m;
    scanf("%d", &m);
    printf("The result is %d\n", fun(m));
    return 0;
}

/* 请在这里填写答案 */
int fun(int w)
{
    int n = 0;
    int temp = w;
    while (temp > 0)
    {
        temp /= 10;
        n++;
    }
    if (n <= 1)
    {
        return -1;
    }
    int result = w % (int)pow(10, n - 1);
    return result;
}