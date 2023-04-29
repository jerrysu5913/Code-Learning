#include "stdio.h"

int main()
{
    int a, b, c, d, e, f, g, h, i, j, k, l, m, n;
    printf("Enter the number of rows and columns of matrix A: ");
    scanf("%d%d", &a, &b);
    printf("Enter the number of rows and columns of matrix B: ");
    scanf("%d%d", &c, &d);
    if (b != c)
    {
        printf("The matrices cannot be multiplied with each other.\n");
    }
    else
    {
        printf("Enter the elements of matrix A:\n");
        int A[a][b];
        for (e = 0; e < a; e++)
        {
            for (f = 0; f < b; f++)
            {
                scanf("%d", &A[e][f]);
            }
        }
        printf("Enter the elements of matrix B:\n");
        int B[c][d];
        for (g = 0; g < c; g++)
        {
            for (h = 0; h < d; h++)
            {
                scanf("%d", &B[g][h]);
            }
        }
        printf("The product of the matrices is:\n");
        int C[a][d];
        for (i = 0; i < a; i++)
        {
            for (j = 0; j < d; j++)
            {
                C[i][j] = 0;
                for (k = 0; k < b; k++)
                {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (l = 0; l < a; l++)
        {
            for (m = 0; m < d; m++)
            {
                printf("%d ", C[l][m]);
            }
            printf("\n");
        }
    }
    return 0;
}