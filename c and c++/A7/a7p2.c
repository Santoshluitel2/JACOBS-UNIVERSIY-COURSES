/*
CH-230-A
a7_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
struct list {
    int info;
    struct list *next;
    struct list *prev;
};

struct list* addfront(struct list* linkedlist,char c ){
    struct list* temp;
    temp= (struct list*)malloc(sizeof( struct list));
    if(temp==NULL){
        printf("memory allocation error");
        return linkedlist;
    }
    temp->prev=NULL;
    temp->info=c;
    temp->next=linkedlist;
    if(linkedlist==NULL)
        return temp;
    else{
        linkedlist->prev=temp;
        return temp;
    }
}
 struct list* removed(struct list* linkedlist, char c){
    struct list* back=NULL;
    struct list* ahead=NULL;
    struct list* temp=NULL;
    temp=linkedlist;
    int bool=0;
    while(temp!=NULL){
            if(temp->info==c){
                bool=1;
                 if(temp->prev==NULL){
                        temp=temp->next;
                        temp->prev=NULL;
                        linkedlist=temp;

                }
                else if(temp->next==NULL){
                    temp=temp->prev;
                    temp->next=NULL;


                }

                else{
                    back=temp->prev;
                    ahead=temp->next;
                    temp=ahead;
                    temp->prev=back;
                    temp=back;
                    temp->next=ahead;

                }

            }
        temp=temp->next;
    }
  if(bool==0)
    printf("The element is not in the list!\n");
  return linkedlist;
}
 void printlist(struct list* linkedlist){
                       struct list* temp;
                       temp=linkedlist;
                       while(temp!=NULL){
                        printf("%c ",temp->info);
                        temp=temp->next;
                       }
                       printf("\n");
                       }
void printback(struct list* linkedlist){
    struct list* temp;
    struct list* back;
    temp=linkedlist;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    back=temp;
    while(back!=NULL){
        printf("%c ",back->info);
        back=back->prev;
    }
    printf("\n");



}
 void empty(struct list* linkedlist)
{
    struct list *temp;
    while (linkedlist != NULL){
           temp= linkedlist->next;
           free(linkedlist);
           linkedlist =temp;
    }
}



int main(){
    struct list* linkedlist=NULL;
    int a;
    char c;
    do{
       scanf("%d",&a);
       getchar();
       switch(a){
       case 1:
         scanf("%c",&c);
         getchar();
         linkedlist=addfront(linkedlist,c);
         break;
       case 2:
           scanf("%c",&c);
           getchar();
           linkedlist=removed(linkedlist,c);
           break;
       case 3:
            printlist(linkedlist);
            break;
       case 4:
            printback(linkedlist);
            break;
       case 5:
            empty(linkedlist);
            break;
       default:
             a=5;
             break;
       }

    }while(a!=5);
return 0;
}
