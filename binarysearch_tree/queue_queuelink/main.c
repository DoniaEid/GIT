#include <stdio.h>
#include <stdlib.h>
#include "queue.c"
int main()
{
  queue q;
  createqueue(&q);
    enqueue(&q, 10);
    enqueue(&q, 20);
    enqueue(&q, 30);
    enqueue(&q, 40);
    enqueue(&q, 50);
    enqueue(&q, 60);
    printf("Dequeued: %d\n", dequeue(&q));//10
    printf("Dequeued: %d\n", dequeue(&q));//20
    enqueue(&q, 60);
    enqueue(&q, 70);
    while (!emptyqueue(q)) {
        printf("Dequeued: %d\n", dequeue(&q));//30 40 50 60 70
    }
    dequeue(&q);
    return 0;
}
