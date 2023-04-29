#include "stdio.h"
#include "string.h"
int fun(char a[],char b[]);
int  main()
{int t;
    char s1[40],s2[40];
    gets(s1);  gets(s2);
    t=fun(s1,s2);
    printf("%d\n",t);
    return 0;
}


/* 请在这里填写答案 */
int fun(char a[],char b[]){
    int len_a = strlen(a);
    int len_b = strlen(b);
    int len = len_a > len_b ? len_a : len_b;
    for (int i = 0; i < len; i++) {
        if (a[i] > b[i]) {
            return 1;
        } else if (a[i] < b[i]) {
            return -1;
        }
    }
    return 0;
}