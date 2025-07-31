#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
typedef int type;
typedef struct node_q
{
    type info;
    struct node_q *next;
} NODE;
typedef struct
{
    NODE *head;
    NODE *rear;
    int size;
} queue;
void creatqueue(queue *q);
int fullqueue(queue q);
int emptyqueue(queue q);
void enqueue(queue*q,type item );
type dequeue(queue*q);


#endif // QUEUE_H_INCLUDED
