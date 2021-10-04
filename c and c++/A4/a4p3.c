/*
CH-230-A
a4_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
float geometric_mean(float arr[], int num);//for mean
float highest(float arr[],int num);//highest element
float lowest(float arr[], int num);//lowest element
float sum(float arr[],int num);//sum
int main(){
    float arr[15],a;
    int i;
    for(i=0; i<15;i++){
        scanf("%f",&a);//getting input upto 15 element
        if(a>=0){
           arr[i]=a;//if positive including in array
        }
        else{
            break;//if negative loop will stop
        }
    }
    char ch;
    getchar();
    printf("enter the operation symbol\n");
    scanf("%c",&ch);//symbol input for operation
    switch(ch){//for all the given input character
        case('m'):
          printf("the mean is %f",geometric_mean(arr,i));
            break;
        case('s'):
            printf("the sum is %f",sum(arr,i));
            break;

         case('h'):
             printf("the highest is %f\n",highest(arr,i));
             break;

         case ('l'):
            printf("the lowest is %f\n",lowest(arr,i));
            break;

         default:
            printf("please enter valid input:\n");
            break;


    }






return 0;
}
float geometric_mean(float arr[], int num){
 float s=1;
 for(int i=0;i<num;i++){//loop upto total given input
     s=s* arr[i];//calcualting product
}
return powf(s,1.0/num);//returning mean
}
float sum(float arr[],int num){//for sum

    float s;
    for(int i=0;i<num;i++){
          s=s + arr[i];//adding all element
}
return s;//returning sum


}
float highest(float arr[],int num){//for highest
    float s;
    for(int i=0;i<num;i++){
            if(arr[i]>s){//checking which is greater among 2 element
                s=(float)arr[i];
                }
            else {
                s=s;
            }

    }

return s;//returning highest
}
float lowest(float arr[], int num){//for lowest
    float s=(float)arr[0];
    for(int i=0;i<num;i++){
            if(arr[i+1]<s){//loop to check the lowest
                s= (float)arr[i+1];
                }
            else {
                s=(float)s;
                }
}
return s;//returning lowest
}

