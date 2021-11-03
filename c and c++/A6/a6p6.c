/*
CH-230-A
a6_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>


int main(){
   unsigned char c;
   scanf("%c",&c);
   printf("The decimal representation is: %d\n",c);
   printf("The  binary representation is: ");
   for(int i=7;i>=0;i--){//to run upto given place value

        if((c>>i &1)==0){//checking the status of first  element
           printf("0");//if it is 0 printing 0

         }
         else if((c>>i&1)==1){
             printf("1");//if it is 1 printing 1

         }


   }


    return 0;
}
