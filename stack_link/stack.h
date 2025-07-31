#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
typedef int type;
typedef struct node_s
{
    type info;
    struct node_s *next;

} NODE;
typedef struct
{
    NODE *head;
} stack_link;
void creatstack(stack_link *s);
int fullstack(stack_link s);
int emptystack(stack_link s);
void push(stack_link *s,type item);
type pop(stack_link *s);
type peek(stack_link s);
#endif // STACK_H_INCLUDED
