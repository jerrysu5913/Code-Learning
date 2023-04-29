#include <stdio.h>

char ToRank(double score);

int main()
{
    double s;
    char r;
    scanf("%lg", &s);
    r = ToRank(s);
    printf("%c\n", r);
    return 0;
}

/* 你提交的代码将被嵌在这里 */
char ToRank(double score)
{
    char rank;
    switch ((int)score / 10)
    {
        case 10:
        case 9:
            rank = 'A';
            break;
        case 8:
            rank = 'B';
            break;
        case 7:
            rank = 'C';
            break;
        case 6:
            rank = 'D';
            break;
        default:
            rank = 'E';
            break;
    }
    return rank;
}