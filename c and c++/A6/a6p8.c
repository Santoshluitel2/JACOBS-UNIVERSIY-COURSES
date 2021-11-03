/*
CH-230-A
a6_p8.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
struct list {
    int info;
    struct list *next;
};

//these functions are used from the slides
struct list *remov(struct list *my_list)
{
    if (my_list==NULL){
           return my_list;
    }
    my_list->info=0;
    return my_list->next;
}
struct list * push_front( struct list * my_list , int value ) {
       struct list *newel ;
       newel = ( struct list *)malloc( sizeof ( struct list ));
       if ( newel == NULL ) {
          printf (" Error allocating memory \n");
          return my_list ;
 }
      newel->info=value ;
      newel->next= my_list ;
      return newel ;
 }


 struct list *push_back(struct list *my_list, int value)
{
    struct list *cursor, *newel;
    cursor = my_list;
    newel = (struct list *)malloc(sizeof(struct list));
    if (newel == NULL)
    {
        printf(" Error allocating memory \n");
        return my_list;
    }
    newel->info = value;
    newel->next = NULL;
    if (my_list == NULL)
        return newel;
    while (cursor->next != NULL)
    {
        cursor = cursor->next;
    }
    cursor->next = newel;
    return my_list;
}

void print_list( struct list * my_list ) {
    struct list * p ;
     for( p = my_list ; p!=NULL;p=p->next ) {
           printf ("%d ", p->info ) ;
           }
 printf("\n");
 }
int main()
{
char ch;
int a,b;
struct list *nlist=NULL;
do
{
    scanf("%c",&ch);
    switch (ch){
    case 'a':
        scanf("%d",&a);
        nlist=push_back(nlist,a);
        break;
    case 'b':
        scanf("%d",&b);
        nlist=push_front(nlist,b);
        break;
    case 'r':
        nlist=remov(nlist);
        break;
    case 'p':
        print_list(nlist);
        break;
    case 'q':
        free(nlist);
    default:
        break;
    }

} while (ch !='q');
return 0;
}



