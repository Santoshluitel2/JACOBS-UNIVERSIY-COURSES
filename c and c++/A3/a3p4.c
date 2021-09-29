/*
CH-230-A
a3_p5.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include <stdio.h>

int main(){
    char c;
    int n;
    int i;
    double sum;
    int a;
    float b;
    float cd;


    printf("please enter a character:\n");
    scanf("%c",&c);//input of character
    getchar();//to avoid error
    printf("please enter number of temperature value you want to enter\n");
    scanf("%d",&n);//accepting integer value
    double tempe[100];//array for storing temperature values
    for(i=0;i<n;i++){
        printf("please enter temperature %d\n",i+1);
        scanf("%lf",&tempe[i]);
        sum=sum+ tempe[i];//sum is done to do not need to do twice

    }

    switch(c){//switch statement for different cases
        case's':
        printf("the sum is %lf",sum);//sum from above
        break;
        case 'p':
        for(i=0;i<n;i++){
            printf("%lf\n",tempe[i]);//printing all temperatures values
        }
        break;
    case 't':
        for(i=0;i<n;i++){
             b= tempe[i];
             cd= (9*b)/5 +32;//converting to fah
             printf("%lf",c);
        }
        break;

    default:
        printf("the average is %lf",sum/n);//printing average

       break;

    }
 return 0;
}

