/*
CH-230-A
a2_p5.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main () {
    int a;
    printf("please enter a integer:\n");
    scanf("%d",&a);//accepting input
    printf("the value is %d\n",a);//printing input
    int *ptr_a;//declaring pointer
    ptr_a= &a;//assigining pointer to variable
    printf("the address to the pointer of %d is %p\n",*ptr_a,ptr_a);//printing address
    *ptr_a+=5;//increasing by 5
    printf("the new value is %d\n",*ptr_a);//printing new value
    printf("the new address is %p\n",ptr_a);//printing new address





 return 0;
}
