#include<stdio.h>
#include <string.h>
#define STRLEN 80

// 返回字符串 s 中空格的数量
int count_sp(const char *s);

int main (void)
{
    char s[STRLEN + 1];
    // 输入字符串
    gets(s);
    // 输出字符串及其空格数
    printf("%s\n%d\n", s, count_sp(s));
    return 0;
}

/***  在此实现 count_sp 函数 ***/
int count_sp(const char *s){
    int count=0;
    int len;
    len=strlen(s);
    for(int i=0;i<len;i++){
        if(s[i]==' ') count++;
    }
    return count;
}
