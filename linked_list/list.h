#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED
typedef  int type;
typedef struct node{
    int info;
    struct node *next;

}NODE;
typedef struct{
    NODE *head;
    int size;
}list;
void creatlist(list *l);
int fulllist(list l);
int emptylist(list l);
void insert(list *l,int pos,type item);
void retreive(list *l,int pos);
void display(list *l);
#endif // LIST_H_INCLUDED
