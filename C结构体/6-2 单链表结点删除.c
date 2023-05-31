#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *readlist();
struct ListNode *deletem( struct ListNode *L, int m );
void printlist( struct ListNode *L )
{
    struct ListNode *p = L;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int main()
{
    int m;
    struct ListNode *L = readlist();
    scanf("%d", &m);
    L = deletem(L, m);
    printlist(L);

    return 0;
}

/* 你的代码将被嵌在这里 */
typedef struct ListNode list;
struct ListNode *readlist(){
    list *head, *p;
    head = (list *)malloc(sizeof(list));
    head->next = NULL;
    p = head;
    int x;
    scanf("%d", &x);
    while (x != -1){
        list *node = (list *)malloc(sizeof(list));
        node->data = x;
        node->next = NULL;
        p->next = node;
        p = node;
        scanf("%d", &x);
    }
    return head;
}
struct ListNode *deletem( struct ListNode *L, int m ){
    list *p, *q;
    p = L;
    q = L->next;
    while (q != NULL){
        if (q->data == m){
            p->next = q->next;
            free(q);
            q = p->next;
        } else{
            p = q;
            q = q->next;
        }
    }
    if (L->data == m){
        L = L->next;
    }
    if (L != NULL && L->data == 0){
        L = L->next;
    }
    return L;
}