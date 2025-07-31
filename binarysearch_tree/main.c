#include <stdio.h>
#include <stdlib.h>
#include"tree.c"
int main()
{
    Tree t;
    creattree(&t);
    if(!fulltree(t))
    {
        inserttree(&t,10);
    }
    if(!fulltree(t))
    {
        inserttree(&t,2);
    }
    if(!fulltree(t))
    {
        inserttree(&t,1);
    }
    if(!fulltree(t))
    {
        inserttree(&t,6);
    }
    if(!fulltree(t))
    {
        inserttree(&t,3);
    }

    if(!fulltree(t))
    {
        inserttree(&t,12);
    }

    if(!fulltree(t))
    {
        inserttree(&t,11);
    }

    if(!fulltree(t))
    {
        inserttree(&t,15);
    }

    if(!fulltree(t))
    {
        inserttree(&t,9);
    }

    if(!fulltree(t))
    {
        inserttree(&t,13);
    }
    int num;
    printf("enter the number you delete it from tree:");
    scanf("%d",&num);
    if(!emptytree(t))
    {
        if(delete(&t,num)==1)
        {
            printf("%d is found and delete it",num);
        }
        else
        {
            printf("%d is not found",num);
        }
    }
    printf("\nTree in inordertree:");
    inordertree(t);
    printf("\nTree in postordertree:");
    postordertree(t);
    printf("\nTree in preordertree:");
    preordertree(t);
    printf("\nSize tree:%d",sizetree(t));
    printf("\nMAX_Height in tree:%d",height(t));
    int item;
    printf("\nEnter number:");
    scanf("%d",&item);
    height_value(&t,item);




    return 0;
}

//if(pos>=0&&pos<=l->size){
//    NODE *p = (NODE *)malloc(sizeof(NODE));
//    if(pos==0){
//    p->info=item;
//    p->next=l->head;
//    l->head=p;
//}
//else{
//    NODE *q;
//    int i;
//   for(q=l->head,i=0;i<pos-1;i++) {
//      q=q->next;
//   }
//   p->info=item;
//   p->next=q->next;
//   q->next=p;
//
//}
//  l->size++;
//}
//else{
//    printf("position is out \n");
//}
