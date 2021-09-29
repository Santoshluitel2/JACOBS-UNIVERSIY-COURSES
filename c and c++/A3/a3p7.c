/*
CH-230-A
a3_p8.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
double sum(double x[10]);
double  average( double x[10]);
int main(){
    float x[10];
    int i;
    printf("please enter a float variable:\n");
    scanf("%lf",&x[i]);
    getchar();
    for(i=0;x[i]!=-99.0;i++){
            printf("please enter a float variable:\n");
            scanf("%lf",&x[i+1]);
            getchar();
    }
    printf("the sum is %lf\n",sum(x));
    printf("the average is %lf\n",average(x));

return 0;
}
double sum(double x[10]){
    double s=0;
    int i;
    for(i=0;i<10;i++){
        s=s+x[i];
    }
    return s;
}
double average(double x[10]){
    int n,i;
    double s,avg;
    for(i=0;i<10;i++){
        double s=0;
        s=s+x[i];
        n=n+1;
}
avg=s/n;
return avg;
}




