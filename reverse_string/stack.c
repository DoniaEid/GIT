#include"stack.h"
void creatstack(stack *s)
{
    s->top=-1;
}
int fullstack(stack s)
{
    return s.top==MAX-1;
}
int emptystack(stack s)
{
    return s.top==-1;
}
void push(stack *s,type item)
{
    s->entry[++s->top]=item;
}
type pop(stack *s)
{
    return s->entry[s->top--];
}
