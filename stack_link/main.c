#include <stdio.h>
#include <stdlib.h>
#include "stack.c"
int main()
{
    stack_link s;
    creatstack(&s);
    if(!fullstack(s))
    {
        push(&s,2);
    }
    if(!fullstack(s))
    {
        push(&s,4);
    }
    if(!fullstack(s))
    {
        push(&s,6);
    }
    if(!fullstack(s))
    {
        push(&s,8);
    }
    printf("the first element in stack:%d\n",peek(s));

    printf("stack is :");
    while(!emptystack(s))
    {
        printf("%d ",pop(&s));//8 6 4 2
    }
    printf("%d ",pop(&s));
    if(emptystack(s))
    {
        printf("\nstack is empty\n");
    }
    printf("donia");

    return 0;
}
