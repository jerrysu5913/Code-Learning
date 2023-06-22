#include <stdio.h>
#include <string.h>

char Scan(char *s,int n){
    char del;
    scanf("%s %c",s,&del);
    return del;
}

int Len(char *s){
    return strlen(s);
}

void Del(char *s,char del,int len){
    for(int i=0;i<len;i++){
        if(s[i]==del) s[i]='\0';
    }
}

void Clean(char *s,int len){
    for(int i=0;i<len;i++){
        for(int j=0;j<len-i-1;j++){
            if(s[j]=='\0'){
            char t=s[j+1];
            s[j+1]=s[j];
            s[j]=t;
            }
        }
    }
}

void Print(char *s){
    if(s[0]=='\0') printf("NULL\n");
    else puts(s);
}

int main(){
    int n,len;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char s[110],del;
        del=Scan(s,n);
        len=Len(s);
        Del(s,del,len);
        Clean(s,len);
        Print(s);
    }
    return 0;
}
