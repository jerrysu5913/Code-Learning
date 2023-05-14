#include <stdio.h>
void fun (long s, long *t);
int main()
{ long s, t;
    scanf("%ld", &s);
    fun(s, &t);
    printf("The result is: %ld\n", t);
    return 0;
}


/* 请在这里填写答案 */
void fun (long s, long *t)
{
    long i=1;
    *t=0;
    while(s>0)
    {
        if((s%10)%2==0)
        {
            *t+=i*(s%10);
            i*=10;
        }
        s/=10;
    }
}