#include "queue.h"
#include"stdlib.h"
void creatqueue(queue *l)
{
    l->rear=NULL;// علشان بس ازود performance جات في امتحان الميد
    l->head=NULL;
    l->size=0;
}
int emptyqueue(queue l)
{
    return l.head==NULL;
}
int fullqueue(queue l)
{
    return 0;
}
void enqueue(queue *l,type item)  // بضيف في الاخر
{
    Node *p=(Node *)malloc(sizeof(Node));//احجز مكان في الزاكره
    p->info=item;
    int pos=l->size;
    if(pos==0)
    {
        p->next=l->head;
        l->head=p;
    }
    else
    {
        Node *q=l->rear;
        p->next=q->next;
        q->next=p;
    }
    l->rear = p;//   مش هيشتغل من غيره لازم وكده هيضم الحالتين
    l->size++;
}
type dequeue(queue *l)
{
    type item;
    if(emptyqueue(*l))
    {
        printf("queue is empty\n");
        return -1;
    }
    else
    {
        Node *temp;
        item=l->head->info;
        temp=l->head;
        l->head=temp->next;
        free(temp);
    }
    if(emptyqueue(*l))
    {
        l->rear=NULL;
    }
    l->size--;
    return item;
}



//int length(linkedlist l) { // علشان اشوف المكان الي هحط في الينكيد ليست مظبوط ولا لا
//    int count = 0;
//    Node *p = l.head;
//    while (p != NULL) {
//        count++;
//        p = p->next;
//    }
//    return count;
//}

//Node *q;
//if(pos==0){
//    p->info=item;
//    p->next=l->head;
//    l->head=p;
//}
//else{
//    int i;
//    for(q=l->head,i=0;i<pos-1;i++){
//        q=q->next;
//    }
//    p->next=q->next;
//    q->next=p;
//}
//Node *temp;
//Node *q;
//type item;
//if(pos==0){
//    temp=l->head;
//    item=temp->info;
//    l->head=temp->next;
//    free(temp);
//}
//else{
//   int i;
//    for(q=l->head,i=0;i<pos-1;i++){
//        q=q->next;
//    }
//    temp=q->next;
//    item=temp->info;
//    q->next=temp->next;
//    free(temp);
//
//}
//return item;
// insert هنا not performance لازم اقارن كزا مره
