/*
CH-230-A
a4_p9.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int prodminmax(int arr[], int n);
int main(){
    int *p,n;
    printf("enter number of elements you want to enter:\n");
    scanf("%d",&n);
    p=(int*)malloc(sizeof(int)*n);//declaring  dynamic memory

    printf("enter integers\n");
    for(int i=0;i<n;i++){
        scanf("%d",(p+i));//getting input for n times
    }

    printf("the product is %d", prodminmax(p,n));//calling function and printing


return 0;
}
int prodminmax(int arr[], int n){
    int l=0; int s=arr[0];//initiating variable
    for(int i=0;i<n;i++){//for max
            if(arr[i]>=l)
                  l=arr[i];

            else
                l=l;


    }
   for(int i=0;i<n;i++){//for min
            if(arr[i]>=s)
                  s=s;

            else
                s= arr[i];
}
return (l*s);//returning value
}
