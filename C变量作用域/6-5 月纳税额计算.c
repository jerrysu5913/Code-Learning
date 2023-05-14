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
double m_tax(double salary,int month){
    double free,tax;
    static double get = 0;
    free = 5000 * month;
    get = get + salary;
    tax = get - free;
    if(tax <= 0) return 0;
    if(tax > 0 && tax <= 36000) return tax * 0.03;
    if(tax > 36000 && tax <= 144000) return tax * 0.1 - 2520;
    if(tax > 144000 && tax <= 300000) return tax * 0.2 - 16920;
    if(tax > 300000 && tax <= 420000) return tax * 0.25 - 31920;
    if(tax > 420000 && tax <= 660000) return tax * 0.3 - 52920;
    if(tax > 660000 && tax <= 960000) return tax * 0.35 - 85920;
    if(tax > 960000) return tax * 0.45 - 181920;
}