/*
CH-230-A
a3_p9.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
double sum25(double v[], int n);//function for sum
int main(){
    int n;
    double v[20];//declaring array
    scanf("%d\n",&n);//asking integer
    for(int i = 0; i < n; i++){//loop for getting input
        scanf("%lf",&v[i]);//getting input
        }
    if(sum25(v,n)!= -111)//condition for valid input
    printf("sum=%lf\n",sum25(v,n));
    else{
        printf("One or both positions are invalid\n");//in case of less input data
    }
return 0;
}
double sum25(double v[], int n){//function
     if(n<6){
            return -111;//returning if elements are less than 6
     }
     else {
            return (v[2]+ v[5]);//if all right returning sum

     }

    }






