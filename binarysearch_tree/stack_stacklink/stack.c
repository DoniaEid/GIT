#include"stack.h"
//void creatstack(stack *s){
//    s->top=-1;// -لشان العد بيبدا من 1
//}
//int fullstack(stack s){
//    return s.top==MAX-1;
//}
//int emptystack(stack s){
//    return s.top==-1;
//}
//void push(stack *s,type item){
//    if(fullstack(*s)){
//        printf("stack is full\n");
//    }
//    else{
//         s->entry[++s->top]=item;
//    }
//
//}
//type pop(stack *s){
//    if(emptystack(*s)){
//        printf("stack is empty\n");
//    }
//    else{
//        type item=s->entry[s->top--];
//        return item;
//    }
//
//}
void creatstack(stack *s)  //طريقه link
{
    s->head=NULL;
    s->size=0;
}
int fullstack(stack s)
{
    return 0;
}
int emptystack(stack s)
{
    return s.head==NULL;
}
void push(stack *s,type item) // بضيف من posision 0
{
    if(fullstack(*s))
    {
        printf("stack is full\n");
    }
    else
    {
        s->size++;
        NODE *p=(NODE*)malloc(sizeof(NODE));
        p->data=item;
        p->next=s->head;
        s->head=p;
    }
}
type pop(stack *s)
{
    if(emptystack(*s))
    {
        printf("stack is empty\n");
    }
    else
    {
        s->size--;
        NODE *temp;
        temp=s->head;
        type item=temp->data;
        s->head=temp->next;
        return item;
    }

}
int sizestack (stack s)
{
    return s.size;
}
