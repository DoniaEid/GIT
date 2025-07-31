#include <stdio.h>
#include <stdlib.h>
#include"stack.c"
int main()
{
    stack s;
    creatstack(&s);
    if(!fullstack(s))
    {
        push(&s,12);
    }
    if(!fullstack(s))
    {
        push(&s,22);
    }
    if(!fullstack(s))
    {
        push(&s,36);
    }
    if(!fullstack(s))
    {
        push(&s,70);
    }
    if(fullstack(s))
    {
        printf("stack is full\n");
    }
    else
    {
        printf("stack is not full\n");
    }
    printf("size of stack is:%d",sizestack(s));
    printf("stack is:");
    while(!emptystack(s))
    {
        printf("%d ",pop(&s));
    }
    if(emptystack(s))
    {
        printf("\nstack is empty");
    }
    else
    {
        printf("\nstack is not empty");
    }
    return 0;
}
