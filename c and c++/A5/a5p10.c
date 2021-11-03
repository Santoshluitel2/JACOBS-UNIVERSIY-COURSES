/*
CH-230-A
a5_p10.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int countdown(int n);//function to count


int main(){
    int n;
    printf("please enter a integer\n");
    scanf("%d",&n);//getting input
    countdown(n);//calling func
    return 0;
  }

int countdown(int n){
    if(n>1){//to print until 2
    printf("%d, ",n);
    countdown(n-1);//calling same func
    }
    else if(n==1){
        printf("%d.\n",n);//to print full stop and 1.
    }

return 0;
  }
