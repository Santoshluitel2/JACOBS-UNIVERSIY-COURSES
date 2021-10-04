/*
CH-230-A
a4_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
int main(){
    char st[50];
    fgets(st,50,stdin);//getting input
    for(int i=0;i<(strlen(st) -1);i++){//loop for printing
            if(i%2==0){
        printf("%c\n",st[i]);//priting first element i.e even
            }
        else {
        printf(" %c\n",st[i]);//priting odd with  space
        }


    }

return 0;
}
