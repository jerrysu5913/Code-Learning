#include "stdio.h"
#include "stdlib.h"

typedef struct node {
    int data;
    struct node *next;
} NODE;

NODE *create() {
    NODE *head;
    head = (NODE *) malloc(sizeof(NODE));
    head->next = NULL;
    return head;
}

NODE *delete(NODE *head, int data) {
    NODE *p, *q;
    p = head;
    q = head->next;
    while (q != NULL && q->data != data) {
        p = q;
        q = q->next;
    }
    if (q != NULL) {
        p->next = q->next;
        free(q);
    }
}

void print(NODE *head) {
    NODE *p;
    p = head->next;
    while (p != NULL) {
        printf("%d\n", p->data);
        p = p->next;
    }
}

NODE *insert(NODE *head, NODE *node) {
    NODE *p = head;
    while (p->next != NULL && p->next->data < node->data) {
        p = p->next;
    }
    node->next = p->next;
    p->next = node;
}

int main() {
    NODE *head, *p;
    head = create();
    int x;
    scanf("%d", &x);
    while (x != -1) {
        p = (NODE *) malloc(sizeof(NODE));
        p->data = x;
        p->next = NULL;
        insert(head, p);
        scanf("%d", &x);
    }
    print(head);
}