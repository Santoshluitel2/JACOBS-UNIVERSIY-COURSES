/*
CH-230-A
a7_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include"linked_list.h"

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

