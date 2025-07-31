#include <stdio.h>
#include <stdlib.h>
#include"list.c"
int main()
{
    list l;
    creatlist(&l);
    insert(&l,0,10);
    insert(&l,1,20);
    insert(&l,2,30);
    insert(&l,3,40);
    insert(&l,3,6);
    insert(&l,1,89);
    retreive(&l,5);
    printf("list is: ");//10 89 20 30 6
    display(&l);

    return 0;

}
