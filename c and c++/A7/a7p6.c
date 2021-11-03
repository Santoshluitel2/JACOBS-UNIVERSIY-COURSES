/*
CH-230-A
a7_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
struct person {
    char name[30];
    int age;
};
int namecomp(struct person*arr,int i);//to avoid warning
//i could have also done for all functions
int agecomp(struct person*arr, int i){
    if(arr[i].age>arr[i+1].age) return 1;//checking which one in greater in 2 values
    else if(arr[i].age==arr[i+1].age) return namecomp(arr,i);
    else return 0;
}
int namecomp(struct person*arr,int i){
    if(strcmp(arr[i].name,arr[i+1].name)>0) return 1;//comparing two strings
    else if(strcmp(arr[i].name,arr[i+1].name)<0) return 0;
    else return agecomp(arr,i);

}

void bsort(struct person*arr,int n,int(*fun)(struct person *arr,int i)){
    struct person temp;
    for(int j=0;j<n;j++){//comparing all values to previous one n-1 times
            for(int k=0;k<n-1;k++){
                if(fun(arr,k)==1){
                    temp=arr[k];
                    arr[k]=arr[k+1];
                    arr[k+1]=temp;
                }}}}
void printlist(struct person *arr,int n)
{
 for(int i=0;i < n;i++){
        printf("{%s,",arr[i].name);
        printf(" %d}; ",arr[i].age);
    }
    printf("\n");
}
int main(){
    int n;
    scanf("%d",&n);
    struct person* arr;
    arr= (struct person*)malloc(sizeof(struct person)*n);
    if(arr== NULL){
        exit(1);
    }
    for(int i=0;i<n;i++){//getting input
            scanf("%s",arr[i].name);
            scanf("%d",&arr[i].age);
    }
   bsort(arr,n,namecomp);
   printlist(arr,n);
   bsort(arr,n,agecomp);
   printlist(arr,n);

}
