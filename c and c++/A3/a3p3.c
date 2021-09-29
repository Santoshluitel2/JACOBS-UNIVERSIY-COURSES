/*
CH-230-A
a3_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
float convert(int);


int main () {
    int  c;
    scanf("%d",&c);//getting input
    convert(c);//calling the function to convert c to km




 return 0;
}

float convert( int cm){//function for calculation
    float x= cm/100000.00;//calculation
    printf("Result of conversion: %lf\n",x);//printing the required info
    return 0;
}

