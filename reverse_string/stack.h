#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAX 100
typedef char type;
typedef struct
{
    int top;
    type entry[MAX];
} stack;
void creatstack(stack *s);
int emptystack(stack s);
int fullstack(stack s);
void push(stack *s,type item);
type pop(stack *s);

#endif // STACK_H_INCLUDED
