
/*
CH-230-A
a5_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void divby5(float arr[], int size){//function to divide
    for(int i=0;i<size;i++){//loop upto last element
        arr[i]=arr[i]/5;
    }
}
int main(){

    float arr[6]={5.5,6.5,7.75,8.0,9.6,10.36};
    printf("Before:\n");
    for(int i=0;i<6;i++){//loop for orginal array
        printf("%.3f ",arr[i]);
    }
    printf("\n");
    divby5(arr,6);//calling function
    printf("After:\n");
    for(int i=0;i<6;i++){//loop for new array
        printf("%.3f ",arr[i]);
   }
   printf("\n");
 return 0;
}
