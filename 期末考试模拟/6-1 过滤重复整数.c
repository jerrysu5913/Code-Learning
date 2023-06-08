#include <stdio.h>

int Unique_Int(int a[], int n);

int main()
{

    int a[100], n, k, count;

    scanf("%d", &n);
    for (k = 0; k < n; k++)
        scanf("%d", &a[k]);
    count = Unique_Int(a, n);
    printf("%d ", count);
    for (k = 0; k < count; k++)
        printf("%d ", a[k]);

    return 0;
}

/* 请在这里填写答案 */
int Unique_Int(int a[], int n)
{
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (a[i] == a[j])
            {
                for (k = i; k < n - 1; k++)
                {
                    a[k] = a[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    return n;
}