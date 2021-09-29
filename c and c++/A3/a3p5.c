/*
CH-230-A
a3_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include <stdio.h>
float to_pounds(int kg,int g);//function to canvert
 int main(){
    int kg,g;
    scanf("%d",&kg);//input kg
    scanf("%d",&g);//input gram
    printf("Result of conversion: %lf\n",to_pounds(kg,g));//priting result as well as calling function
 return 0;
}
float to_pounds(kg,g){
    float p;
    p=kg*2.2 + g*2.2/1000;//calcuation
    return p;//returning the formula for calulation

}
