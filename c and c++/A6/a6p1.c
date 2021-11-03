/*
CH-230-A
a6_p1.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define swap(a,b,type){type temp=a;a=b; b=temp;}//defining macro and swaping value
int main(){
    int a,b;
    double c,d;
    scanf("%d%d%lf%lf",&a,&b,&c,&d);//getting all input
    swap(a,b,int);
    swap(c,d,double);
    printf("After swapping:\n");//printing
    printf("%d\n",a);
    printf("%d\n",b);
    printf("%lf\n",c);
    printf("%lf\n",d);
    return 0;
}
