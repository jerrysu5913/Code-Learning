#include <stdio.h>
#include <stdlib.h>

struct ListNode {
    int data;
    struct ListNode *next;
};

struct ListNode *createlist();

int main()
{
    struct ListNode *p, *head = NULL;

    head = createlist();
    for ( p = head; p != NULL; p = p->next )
        printf("%d ", p->data);
    printf("\n");

    return 0;
}

/* 你的代码将被嵌在这里 */
struct ListNode *createlist()
{
    struct ListNode *p, *q, *head = NULL;
    int n;

    scanf("%d", &n);
    while ( n != -1 ) {
        p = (struct ListNode *)malloc(sizeof(struct ListNode));
        p->data = n;
        p->next = head;
        head = p;
        scanf("%d", &n);
    }

    return head;
}