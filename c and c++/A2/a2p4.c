/*
CH-230-A
a2_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main () {
    float a,b,h;
    scanf(" %f%f%f",&a,&b,&h);
    printf("square area=%f\n",a*a);
    printf("rectangle area=%f\n",a*b);
    printf("triangle area=%f\n",(a*h)*0.5);
    printf("trapezoid area=%f\n",(a+b)/2 *h);






 return 0;
}
