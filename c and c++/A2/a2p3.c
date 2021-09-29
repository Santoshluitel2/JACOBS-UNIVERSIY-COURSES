/*
CH-230-A
a2_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main () {
    int weeks,days,hours,total_hours;
    printf("please enter number of weeks:\n");
    scanf("%d",&weeks);
    printf("please enter number of days:\n");
    scanf("%d",&days);
    printf("please enter number of hours:\n");
    scanf("%d",&hours);
    total_hours= hours + days*24 + weeks*7*24;
    printf("The total numbers of hours is %d",total_hours);





 return 0;
}




