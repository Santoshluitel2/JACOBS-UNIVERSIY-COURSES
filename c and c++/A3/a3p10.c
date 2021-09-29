/*
CH-230-A
a3_p10.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
float product(float a,float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);
int main(){
    float a,b,x;
    float *p;
    x=0.0;//intitializing the variable for pointer
    p=&x;//initilizing the point to x
    printf("please enter first float variable\n");
    scanf("%f",&a);//input for first number
    printf("please enter second float variable\n");
    scanf("%f",&b);// for second
    printf("the product by first function is %f\n",product(a,b));//printing by first func
    productbyref(a,b,p);//calling 2nd void function whicch do the product by ref
    printf("the product by 2nd function is %f\n",*p);//printing product performed by 2nd fuc
    if( product(a,b)== *p){//checking if the product from 1st and 2nd are same
        printf("the product from first and 2nd func are same\n");
        }
        else{
            printf("error");
        }

    modifybyref(&a,&b);//calling 3rd func
    printf("the modified number by 3rd function are  \n %f and %f\n",a,b);//printing the value given by 3rd func



return 0;
}
float product(float a, float b){
    return a*b;//simply returning product

}
void productbyref(float a, float b, float *p){
    *p=(a*b);//asssing product to the pointer

}
void modifybyref(float *a, float *b){
*a= *a +3;//sinply adding by reference
*b= *b + 11;
}




