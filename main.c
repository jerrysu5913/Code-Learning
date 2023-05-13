#include<stdio.h>

double m_tax(double salary,int month);

int main()
{
    double money,tax;
    int i;
    for(i=1;i<=12;i++)
    {
        scanf("%lf",&money);
        tax=m_tax(money,i);
        printf("the sum of %d months tax is %.2f\n",i,tax);
    }
    return 0;
}
/* 请在这里填写答案 */
