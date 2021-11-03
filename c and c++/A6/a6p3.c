/*
CH-230-A
a6_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
#define max(a,b,c)((a>b && a>c)?a:((b>a && b>c)?b:c))//checking the max value
#define min(a,b,c)((a<b && a<c)?a:((b<a && b<c)?b:c))//checking the min value
#define  mid(a,b,c)( (max(a,b,c)+ min(a,b,c))/2.0)//calculating mid range value
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);//getting input
    printf("The mid-range is: %f\n",mid(a,b,c));//printing output

    return 0;
}
