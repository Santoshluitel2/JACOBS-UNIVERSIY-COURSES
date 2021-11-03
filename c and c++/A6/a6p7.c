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


   int  tobinary( unsigned char ch){
     for(int i=7;i>=0;i--){//to run upto given place value

        if((ch>>i &1)==0)//checking the status of first  element
           printf("0");//if it is 0 printing 0


         else
             printf("1");//if it is 1 printing 1
}
return 0;
 }
unsigned set3bits( unsigned char ch, int a, int b,int c){
    ch=ch| (int)pow(2,a);
    ch=ch| (int)pow(2,b);
    ch=ch| (int)pow(2,c);
    tobinary(ch);
    return 0;

 }
int main(){
    unsigned char ch;
    int a,b,c;
    scanf("%c",&ch);
    scanf("%d%d%d",&a,&b,&c);
    printf("The decimal representation is: %d\n",ch);
    printf("The binary representation is: ");
    tobinary(ch);
    printf("\n");
    printf("After setting the bits: ");
    set3bits(ch,a,b,c);
    printf("\n");

    return 0;
}
