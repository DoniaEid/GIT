#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
int main_q()
{
    queue q;
    creatqueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);// لازم افضي وبعدين ارجع من الاول
    printf("Dequeued: %d\n", dequeue(&q)); // يطبع 10
    printf("Dequeued: %d\n", dequeue(&q)); // يطبع 20
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    enqueue(&q, 70); // دي المفروض تطلع "Queue is full!"
    while(!emptyqueue(q))
    {
        printf("Dequeued: %d\n", dequeue(&q));
    }

//    30 40 50
    return 0;
}
