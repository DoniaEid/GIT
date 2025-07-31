#include"queue.h"
#include <stdio.h>
#include<stdlib.h>
//void createqueue(queue *q){
//    q->font=0;
//    q->rear=MAX-1;
//    q->size=0;// مهم
//}
//int fullqueue(queue q){
//    return q.size==MAX;
//}
//int emptyqueue(queue q){
//    return q.size==0;
//}
//void enqueue(queue *q,type item){
//    if(fullqueue(*q)){
//        printf("queue is full\n");
//    }
//    else{
//        q->rear=(q->rear+1)%MAX;
//        q->entry[q->rear]=item;
//        q->size++;
//    }
//}
//type dequeue(queue *q){
//    if(emptyqueue(*q)){
//        printf("queue is empty\n");
//    }
//    else{
//        type item;
//        item=q->entry[q->font];
//        q->font=(q->font+1)%MAX;
//        q->size--;
//        return item;
//    }
//
//}
void createqueue(queue *q)
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
    if(fullqueue(*q))
    {
        printf("queue is full\n");
    }
    else
    {
        NODE *p=(NODE*)malloc(sizeof(NODE));
        p->info=item;
        if(q->head==NULL)
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
        q->rear=p;
        q->size++;
    }
}
type dequeue(queue *q)
{
    if(emptyqueue(*q))
    {
        printf("queue is empty\n");
        return -1;
    }
    else
    {
        type item;
        NODE *temp=q->head;
        item=temp->info;
        q->head=temp->next;
        free(temp);
        q->size--;
        return item;
    }
}
