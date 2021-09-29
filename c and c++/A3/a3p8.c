/*
CH-230-A
a3_p8.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
float sum(float x[10],int j);//function for sum
float  average( float x[10],int j);//function for average
int main(){
    float x[10];
    int j;
    for(j=0;j<10;j++){//loop for input 10 times or until -99 is entered
            printf("please enter a value\n");
            scanf("%f",&x[j]);//accepting input
            if(x[j]==-99.0){//stop taking input if it is -99
            break;
            }
    }
    printf("the sum is %f\n",sum(x,j));//printing by calling function inside it
    printf("the average is %f\n",average(x,j));//printing by calling function inside it


return 0;
}
float sum(float x[10],int j){//function for sym
    float sum;
    int i;
    for(i=0;i<j;i++){//loop upto last input
        sum=sum + x[i];//summing up
    }

return sum;//returning sum back to main function
  }

float average(float x[10],int j){//for average
    float s=0;
    float avg;
    int i;
    for(i=0;i<j;i++){//loop upto last input j
        s= s + x[i];//sum for average
    }
    avg= s/j;//average
    return avg;//returning value back to main function


}


