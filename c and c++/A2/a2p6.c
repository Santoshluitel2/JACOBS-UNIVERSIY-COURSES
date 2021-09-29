/*
CH-230-A
a2_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main () {
    double x,y;
    printf("please enter two double variables:\n");
    scanf("%lf%lf",&x,&y);
    double *ptr_one,*ptr_two,*ptr_three;
    ptr_one=&x;
    ptr_two=&x;
    ptr_three=&y;
    printf("the address of first pointer is %p\n",ptr_one);
    printf("the address of 2nd pointer is %p\n",ptr_two);
    printf("the address of third pointer is %p\n",ptr_three);


 return 0;
}
