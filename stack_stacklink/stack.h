#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
//#define MAX 5
typedef char type;
//typedef struct {
//     int top;
//     type entry[MAX];
//} stack;
typedef struct node
{
    int data;
    struct node *next;
} NODE;
typedef struct
{
    NODE *head;
    int size;
} stack;
void creatstack(stack *s);
int fullstack(stack s);
int emptystack(stack s);
void push(stack *s, type item);
type pop(stack *s);
int sizestack(stack s);
#endif // STACK_H_INCLUDED
