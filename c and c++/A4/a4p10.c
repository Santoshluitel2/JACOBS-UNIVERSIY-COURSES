/*
CH-230-A
a4_p10.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
void proddivpowinv(float a, float b, float *prod, float *div,float *pwr, float *invb){//function for computation
    *prod=a*b;//doing calcualtions
    *div=a/b;
    *pwr= powf(a,b);
    *invb=1.0/b;


}
int main(){
float a,b,*prod,*div, *pwr,*invb;//creating pointer
float p,d,po,i;//creating variable
prod=&p;//referencing
div=&d;
pwr=&po;
invb=&i;
printf("please enter two values\n");
scanf("%f%f",&a,&b);//asking input
proddivpowinv(a,b,prod,div,pwr,invb);//calling function by giving pointer reference
printf("the product is %lf \n",p);//orinting values
printf("the divison is %lf\n",d);
printf("the power of first to 2nd is %lf\n",po);
printf("the inverse of 2nd is %lf\n",i);



return 0;
}

