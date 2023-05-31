#include <stdio.h>
#include <stdlib.h>

typedef int ElementType;
typedef struct Node *PtrToNode;
struct Node {
    ElementType Data;
    PtrToNode   Next;
};
typedef PtrToNode List;

List Read(); /* 细节在此不表 */
void Print( List L ); /* 细节在此不表 */

List Insert( List L, ElementType X );

int main()
{
    List L;
    ElementType X;
    L = Read();
    scanf("%d", &X);
    L = Insert(L, X);
    Print(L);
    return 0;
}

/* 你的代码将被嵌在这里 */
List Insert(List L, ElementType X)
{
    List p = L;
    List q = (List)malloc(sizeof(struct Node));
    q->Data = X;
    q->Next = NULL;
    if (L == NULL) {
        return q;
    }
    if (X < L->Data) {
        q->Next = L;
        return q;
    }
    while (p->Next != NULL && X >= p->Next->Data) {
        p = p->Next;
    }
    q->Next = p->Next;
    p->Next = q;
    return L;
}