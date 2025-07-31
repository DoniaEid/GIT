#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
int main()
{
    queue q;
    creatqueue(&q);
    if(!fullqueue(q))
    {
        enqueue(&q,12);
    }
    if(!fullqueue(q))
    {
        enqueue(&q,16);
    }
    if(!fullqueue(q))
    {
        enqueue(&q,20);
    }
    if(!fullqueue(q))
    {
        enqueue(&q,45);
    }
    printf("size of queue is:%d\n",q.size);
    printf("queue is:");
    while(!emptyqueue(q))
    {
        printf("%d ",dequeue(&q));
    }
    if(emptyqueue(q))
    {
        printf("\nqueue is empty\n");
    }

    return 0;
}
