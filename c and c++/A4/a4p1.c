/*
CH-230-A
a4_p1.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<math.h>//importing math library for pi
int main(){
float x,y,a,i;//variables
scanf("%f",&x);//getting input
scanf("%f",&y);
scanf("%f",&a);
for(i=x;i<=y;i=i+a){//loop to print upto max limit
        printf("%f %f %f\n",i,i*i*M_PI,2*i*M_PI);

}
return 0;
}
