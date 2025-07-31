#ifndef TREE_H_INCLUDED
#define TREE_H_INCLUDED
typedef int type;
typedef struct node{
    struct node *left;
    struct node *right;
    type info;
} NODE ;

   typedef NODE *Tree;

void creattree(Tree *t);
int emptytree(Tree t);
int fulltree(Tree t);
void inserttree(Tree *t,type item);
void inordertree(Tree t);
void preordertree(Tree t);
void postordertree(Tree t);
int sizetree(Tree t);
int height(Tree t);
void height_value(Tree *t,type k);
int min_number(Tree t);
int max_number(Tree t);
void cleartree(Tree *t);
int delete(Tree *t,type item);
void deletenode(Tree *pt);
#endif // TREE_H_INCLUDED
