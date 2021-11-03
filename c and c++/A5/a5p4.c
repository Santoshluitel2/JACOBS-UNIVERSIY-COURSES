/*
CH-230-A
a5_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void divby5(float* p, int size){//function to divide
    for(int i=0;i<size;i++){//loop upto last element
        *(p+i) =(*(p+i))/5.0;//using pointer for increment
    }
}
int main(){
    int n;
    float *p;
    scanf("%d",&n);
    p=(float*)malloc(sizeof(int)*n);//dynamic array to store numberes
    for(int i=0;i<n;i++){
        scanf("%f",(p+i));//getting all input
    }
    printf("Before:\n");
    for(int i=0;i<n;i++){//loop for original array
        printf("%.3f ",*(p+i));
    }
    printf("\n");
    divby5(p,n);//calling function
    printf("After:\n");
    for(int i=0;i<n;i++){//loop for new array
        printf("%.3f ",*(p+i));
   }
   printf("\n");
   free(p);
 return 0;
}
