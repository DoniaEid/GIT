#include "stack.h"
#include "stdlib.h"
void creatstack(stack_link *s)
{
    s->head=NULL;
}
int fullstack(stack_link s)
{
    return 0;
}
int emptystack(stack_link s)
{
    return s.head==NULL;
}
void push(stack_link *s,type item)
{

    NODE *p=(NODE*)malloc(sizeof(NODE));
    p->info=item;
    p->next=s->head;
    s->head=p;
}
type pop(stack_link *s)
{
    if(!emptystack(*s))
    {
        type data;
        NODE *temp;
        temp=s->head;
        data=temp->info;
        s->head=temp->next;
        free(temp);
        return data;
    }

}
type peek(stack_link s)
{
    return s.head->info;
}
