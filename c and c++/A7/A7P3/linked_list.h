
/*
CH-230-A
a7_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
struct list {
    int info;
    struct list *next;
    struct list *prev;
};

struct list* addfront(struct list* linkedlist,char c );
struct list* removed(struct list* linkedlist, char c);
void printlist(struct list* linkedlist);
void printback(struct list* linkedlist);
void empty(struct list* linkedlist);




