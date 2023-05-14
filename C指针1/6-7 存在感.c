#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int frequency ( char* paragraph, char* from, char* to );
int main()
{
    int N;
    char *s;
    int from,to;
    int freq;
    scanf("%d\n",&N);
    s = (char *)malloc((N+1)*sizeof(char));
    gets(s);
    scanf("%d %d", &from, &to);

    freq = frequency ( s, s+from-1, s+to-1 );

    printf("%d\n",freq);
    return 0;
}

/* 您提交的代码将放置在这里 */
int frequency ( char* paragraph, char* from, char* to ){
    int x=0;
    for(int i=0;paragraph[i]!='\0';i++){
        if (paragraph[i] == *from) {
            int flag=1;
            for(int j=0;j<(to-from+1);j++)
                if(paragraph[i+j]!=*(from+j)) {
                    flag=0;
                    break;
                }
            if(flag)
                x++;
        }
    }
    return x;
}