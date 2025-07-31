#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
typedef int type;
typedef struct node
{
    type info;
    struct node *next;
} Node;
typedef struct
{
    Node *head;
    Node *rear;
    int size;
} queue;

void creatqueue(queue *q);
int fullqueue(queue q);
int emptyqueue(queue q);
void enqueue(queue *q,type item);
type dequeue(queue *q);

#endif // QUEUE_H_INCLUDED
