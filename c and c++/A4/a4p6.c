/*
CH-230-A
a4_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int greatest( int *p,int n);
int main(){
    int *p,n;
    printf("enter number of elements you want to enter:\n");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);//declaring  dynamic memory
    printf("enter integers\n");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));//getting input for n times
    }
    greatest(p,n);//calling function for two greatest number
free(p);


}
int greatest(int *p, int n){
    int s=0,m=0;
    for(int i=0;i<n;i++){//finding the greatest one first
        if(*(p+i)>s)
            s= *(p+i);
        else
                s=s;
}
    for(int j=0;j<n;j++){//finding 2nd greatest
        if(*(p+j)==s){//avoiding the greatest one to the counted as greatest again
            m=m;
        }

         else if (*(p+j) >m){//checking for 2nd greatest excluding the greatest
            m =*(p+j);
    }
    }
    printf("the greatest values are %d and %d",s,m);//priniting
return 0;
}

