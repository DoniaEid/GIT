#include "list.h"
#include <stdlib.h>
void creatlist(list *l){
    l->head=NULL;
    l->size=0;
}
int fulllist(list l){
    return 0;
}
int emptylist(list l){
    return l.head==NULL;
}
void insert(list *l,int pos,type item){
    if(pos>=0&&pos<=l->size){
        NODE *p=(NODE*)malloc(sizeof(NODE));
        p->info=item;
        if(pos==0){
            p->next=l->head;
            l->head=p;
        }
        else{
            NODE *q;
            int i;
            for(q=l->head,i=0;i<pos-1;i++){
                q=q->next;
            }
            p->next=q->next;
            q->next=p;
        }
        l->size++;
    }
    else{
        printf("pos is not valid\n");
    }
}
void retreive(list *l,int pos){
    if(pos>=0&&pos<l->size){
        type item;
        NODE *temp;
        if(pos==0){
            temp=l->head;
            item=temp->info;
            l->head=temp->next;
        }
        else{
            NODE *q;
            int i;
            for(q=l->head,i=0;i<pos-1;i++){
                q=q->next;
            }
            temp=q->next;
            item=temp->info;
            q->next=temp->next;
        }
        free(temp);
        l->size--;

    }
    else{
        printf("pos is not valid\n");
    }
}
void display(list *l){
    NODE *q=l->head;
    while(q!=NULL){
        printf("%d ->",q->info);
        q=q->next;
    }
   printf("NULL\n");
}
