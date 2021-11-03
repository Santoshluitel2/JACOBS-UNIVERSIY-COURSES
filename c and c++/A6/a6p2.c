/*
CH-230-A
a6_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define lsig(a)(a&1?1:0)//here and operation is done with 1
//it will print the output one or 0.
int main(){
    unsigned char a;
    scanf("%c",&a);//getting input
    printf("The decimal representation is: %d\n",a);//printing the decimal output
    printf("The least significant bit is:  %d",lsig(a));//printing the least significant output

    return 0;
}
