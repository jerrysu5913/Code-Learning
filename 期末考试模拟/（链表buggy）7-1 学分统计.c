#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct data data;

struct data{
    char num[20];
    char name[20];
    int score;
    data *next;
};

data *create(int n){
    data *head, *p, *q;
    head = (data*)malloc(sizeof(data));
    head->next = NULL;
    p = head;
    for (int i = 0; i < n; i++) {
        q = (data*)malloc(sizeof(data));
        scanf("%s %s %d", q->num, q->name, &q->score);
        p->next = q;
        p = q;
    }
    p->next = NULL;
    return head;
}

void judge(data *head){
    int i=0;
    data *p;
    p = head->next;
    while(p != NULL){
        if(p->score >= 85){
            printf("%s %s A\n",p->num,p->name);
        }
        else if(p->score >= 70){
            printf("%s %s B\n",p->num,p->name);
        }
        else if(p->score >= 60){
            printf("%s %s C\n",p->num,p->name);
        }
        else{
            printf("%s %s D\n",p->num,p->name);
            i++;
        }
        p = p->next;
    }
    printf("%d",i);
};

int main(){
    data *head;
    int n;
    scanf("%d", &n);
    head = create(n);
    judge(head);
    return 0;
}