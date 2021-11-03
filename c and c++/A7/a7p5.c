/*
CH-230-A
a7_p5.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
int acc(const void* aa, const void*bb){
    const int *a=aa;
    const int *b=bb;
    return *a-*b;
}
int des(const void* aa, const void*bb){
    const int *a=aa;
    const int *b=bb;
    return *b-*a;
}
int main(){
    int n,*arr;
    char c;
    scanf("%d",&n);
    arr=(int*)malloc(sizeof(int)*n);

    while(1){
       for(int i=0;i<n;i++) {
       scanf("%d",&arr[i]);
       }
       scanf("%c",&c);
       if(c=='d'){
            qsort(arr,n,sizeof(int),des);
            for(int i=0;i<n;i++) {
            printf("%d ",arr[i]);
       }
         printf("\n");
       }
         else if(c=='a'){
               qsort(arr,n,sizeof(int),acc);
               for(int i=0;i<n;i++) {
                printf("%d ",arr[i]);
       }
       printf("\n");
       }
        else if(c=='e'){
        exit(1);
       }

    }

}
