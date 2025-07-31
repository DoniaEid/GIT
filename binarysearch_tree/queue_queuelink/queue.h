#ifndef QUEUE_H_INCLUDED
#define QUEUE_H_INCLUDED
//#define MAX 5
typedef int type;
//typedef struct{
//    int font;
//    int rear;
//    int size;
//    int entry[MAX];
//}queue;
typedef struct node
{
    struct node *next;
    type info;
} NODE;
typedef struct
{
    NODE *head;
    NODE *rear;
    int size;
} queue;
void createqueue(queue *q);
int fullqueue(queue q);
int emptyqueue(queue q);
void enqueue(queue *q,type item);
type dequeue(queue *q);

#endif // QUEUE_H_INCLUDED
