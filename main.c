#include <stdio.h>
#include <stdlib.h>

typedef struct link
{
    int data;
    struct link *next;
}*Link;

Link AppendNode(Link head,int data);
void DisplyNode(Link head);

int main()
{
    int    data;
    Link head = NULL;
    while (1)
    {
        scanf("%d",&data);
        if (data==-1)
            break;
        head = AppendNode(head,data);
    }
    DisplyNode(head);
    return 0;
}

Link AppendNode(Link head,int data){
    Link new = (Link)malloc(sizeof(Link));
    new->data=data;
    new->next=NULL;
    if(head==NULL){
        head=new;
    }
    else{
        Link p=head;
        while (p->next != NULL)
        {
            p=p->next;
        }
        p->next=new;
    }
    return head;
}

void DisplyNode(Link head){
    if(head==NULL) {
        printf("NULL");
        return NULL;
    }
    Link p=head;
    while (p!=NULL)
    {
        if(p!=head) printf(",");
        printf("%d",p->data);
        p=p->next;
    }
}