#include"tree.h"
#include <stdlib.h>
void creattree(Tree *t)
{
    *t=NULL;
}
int fulltree(Tree t)
{
    return 0;
}
int emptytree(Tree t)
{
    return t==NULL;
}
//void inserttree(Tree *t,type item){
//    NODE *p=(NODE*) malloc(sizeof(NODE));
//    p->info=item;
//    p->left=NULL;
//    p->right=NULL;
//    if(*t==NULL){
//        *t=p;
//    }
//
//    else{
//        NODE *cur,*prev;
//        cur=*t;
//         while(cur!=NULL){
//            prev=cur;
//             if(item<cur->info){
//                cur=cur->left;
//             }
//             else{
//                 cur=cur->right;
//             }
//         }
//         if(item<prev->info){
//            prev->left=p;
//         }
//         else{
//             prev->right=p;
//         }
//    }
//}
//void deletenode(Tree *pt){
//    NODE *q=*pt;
//    if(q->right==NULL){
//        *pt=q->left;
//    }
//    else if(q->left==NULL){
//        *pt=q->right;
//    }
//    else{ // فيها يمين وشمال
//        NODE *r=NULL;
//        q=q->left;
//        while(q->right!=NULL){ // اكبر قيمه
//            r=q;
//            q=q->right;
//        }
//        (*pt)->info=q->info;// كده سويت القيمه
//        if(r!=NULL){
//            r->right=q->left;
//        }
//        else{
//            (*pt)->left=q->left;
//        }
//        free(q);
//    }
//}
//void delete(Tree *t ,type item){
//   int found=0;
//   NODE *cur,*prev;
//   cur=*t;
//   while(cur!=NULL&&!(found=(item==cur->info)){
//         prev=cur;
//         if(item<cur->info){
//            cur=cur->left;
//         }
//         else{
//            cur=cur->right;
//         }
//    }
//    if(found==1){
//        if(prev==NULL){
//            deletenode(&t);
//        }
//        else if(item<prev->info){
//            deletenode(&prev->left);
//        }
//        else{
//               deletenode(&prev->right);
//        }
//     }
//    return found;
//}
//void inordertree(Tree t){//LVR
//    if (t == NULL) return;
//    inordertree(t->left);
//    printf("%d ", t->info);
//    inordertree(t->right);
//}
//void preordertree(Tree t){ //VLR
//    if (t == NULL) return;
//     printf("%d ", t->info);
//     preordertree(t->left);
//     preordertree(t->right);
//}
//void postordertree(Tree t){//LRV
//    if (t == NULL) return;
//      postordertree(t->left);
//      postordertree(t->right);
//      printf("%d ", t->info);
//}
//int sizetree(Tree t){
//    if(t==NULL){ // شرط التوقف بتاع recursive
//        return;
//    }
//    else{
//        return 1+sizetree(t->left)+sizetree(t->right);
//    }
//}
//int min_number(Tree t){
//    while(t->left!=NULL){
//        t=t->left;
//    }
//    return t->info;
//}
//int max_number(Tree t){
//    while(t->right!=NULL){
//        t=t->right;
//    }
//    return t->info;
//}
//void inserttree(Tree *t,type item){
//     NODE *p=(NODE*) malloc(sizeof(NODE));
//     p->left=NULL;
//     p->right=NULL;
//     p->info=item;
//     if(*t==NULL){// اول عنصر يضاف
//        *t=p;
//     }
//     else{
//        NODE *cur=*t;
//        NODE*prev=NULL;
//        while(cur!=NULL){
//            prev=cur;
//            if(item<cur->info){
//                cur=cur->left;
//            }
//            else{
//                cur=cur->right;;
//            }
//        }
//     if(item<prev->info){
//        prev->left=p;
//     }
//     else{
//         prev->right=p;
//     }
//
//}
void inserttree(Tree *t,type item)
{
    NODE *p=(NODE*) malloc(sizeof(NODE));
    p->left=NULL;
    p->right=NULL;
    p->info=item;
    if(*t==NULL)
    {
        *t=p;// اول عنصر
    }
    else
    {
        NODE *cur=*t;
        NODE *prev=NULL;
        while(cur!=NULL)
        {
            prev=cur;
            if(item<cur->info)
            {
                cur=cur->left;
            }
            else
            {
                cur=cur->right;
            }
        }
        if(item<prev->info)
        {
            prev->left=p;// احنا مجهزين ح بالقيمه بتاعته فوق
        }
        else
        {
            prev->right=p;
        }
    }
}
void deletenode(Tree *pt)
{
    NODE *q=*pt;
    if(q->left==NULL)
    {
        *pt=q->right;
    }
    else if(q->right==NULL)
    {
        *pt=q->left;
    }
    else
    {
        q=q->left;
        NODE *r=NULL;
        while(q->right!=NULL)
        {
            r=q;
            q=q->right;
        }
        (*pt)->info=q->info;
        if(r!=NULL)
        {
            r->right=q->left; // مهم اوي
        }
        else
        {
            (*pt)->left=q->left;
        }
    }
    free(q);
}
int delete(Tree *t,type item)
{
    int found=0;
    NODE *cur=*t;
    NODE *prev=NULL;
    while(cur!=NULL&&!(found=(item==cur->info)))
    {
        prev=cur;//لتخزين الاب علشان امسح
        if(item<cur->info)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }
    if(found==1)
    {
        if(prev == NULL)
        {
            deletenode(t);// deletenode(&*t); تساوي كده
        }

        else if(item<prev->info)
        {
            deletenode(&prev->left);
        }
        else
        {
            deletenode(&prev->right);
        }
    }
    return found;
}
void cleartree(Tree *t)
{
    if(*t==NULL)
    {
        return;
    }
    else
    {
        cleartree(&(*t)->left); // ابعت كبوينتر
        cleartree(&(*t)->right);
        free(*t);
        *t=NULL;
    }
}
void postordertree(Tree t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        postordertree(t->left);
        postordertree(t->right);
        printf("%d ",t->info);
    }
}
void inordertree(Tree t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        inordertree(t->left);
        printf("%d ",t->info);
        inordertree(t->right);

    }
}
void preordertree(Tree t)
{
    if(t==NULL)
    {
        return;
    }
    else
    {
        printf("%d ",t->info);
        preordertree(t->left);
        preordertree(t->right);

    }
}
int sizetree(Tree t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        return 1+sizetree(t->left)+sizetree(t->right);
    }
}
int height(Tree t)
{
    if(t==NULL)
    {
        return 0;
    }
    else
    {
        int a=height(t->left);
        int b=height(t->right);
        return (a>b)?1+a:1+b;
    }
}
void height_value( Tree *t,type k)
{
    NODE *cur=*t;
    int found=0;
    while(cur!=NULL&&!(found=(k==cur->info)))
    {
        if(k<cur->info)
        {
            cur=cur->left;
        }
        else
        {
            cur=cur->right;
        }
    }
    if(found==1)
    {
        printf("Height %d:%d",k,height(cur));
    }
    else
    {
        printf("\n%d is not found in tree");
        return;
    }
}


















