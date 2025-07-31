#include"queue.h"
#include"stdlib.h"
void creatqueue(queue *q)
{
    q->head=NULL;
    q->rear=NULL;
    q->size=0;
}
int fullqueue(queue q)
{
    return 0;
}
int emptyqueue(queue q)
{
    return q.head==NULL;
}
void enqueue(queue *q,type item)
{
    int pos=q->size;
    NODE *p=(NODE*)malloc(sizeof(NODE));
    p->info=item;
    if(pos==0)
    {
        p->next=q->head;
        q->head=p;
    }
    else
    {
        NODE *t=q->rear;// بدل for loop
        p->next=t->next;
        t->next=p;
    }
    q->size++;
    q->rear=p;// لامم الاثنين
}
type dequeue(queue *q)
{
    NODE *temp;
    temp=q->head;
    type data=temp->info;
    q->head=temp->next;
    free(temp);
    q->size--;
    return data;
    if(emptyqueue(*q))
    {
        q->rear=NULL;
    }

}
