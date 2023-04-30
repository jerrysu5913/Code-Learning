#include <stdio.h>

void PrintHex(int num, int cap);

int main()
{
    int n, c;
    scanf("%d%d", &n, &c);
    PrintHex(n, c);
    putchar('\n');
    return 0;
}

/* 你提交的代码将被嵌在这里 */
void PrintHex(int num, int cap)
{
    int c = num % 16;
    int r = num / 16;
    if( r != 0 ) PrintHex(r, cap);

    if ( c < 10 )
        putchar(c + '0' );
    else
        putchar(cap? c+'A'-10 : c+'a'-10 );
}