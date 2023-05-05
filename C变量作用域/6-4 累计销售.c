#include <stdio.h>

double price(double x);


int main()
{
    double buy,total;
    scanf("%lf",&buy); //输入上半年销售量
    total=price(buy);  //计算总提成
    printf("sum_s=%.2f\n",total);
    scanf("%lf",&buy); //输入下半年销售量
    total=price(buy);  //计算总提成
    printf("sum_s=%.2f\n",total);
    return 0;
}

/* 请在这里填写答案 */
double price(double x) {
    static double b = 0;
    b = b + x;
    switch ((int)(b)) {
        case 0 ... 4999:
            return b * 0.01;
            break;
        case 5000 ... 9999:
            return b * 0.05;
            break;
        default:
            return b * 0.10;
            break;
    }
}