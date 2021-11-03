/*
CH-230-A
a5_p5.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
double scalar(int n,double *v,double *w){//function for dot product
    double pr;
    for(int i=0;i<n;i++){
            double temp;
             temp=*(v+i) * (*(w+i));//product
             pr=temp+pr;//summing up
    }
    return pr;
}
double largest(int n,double *v){//for largest value
    int po=0;
    double l=0;
    for( int i=0;i<n;i++){//loop to run upto last element
        if(*(v+i)>l){
            l=*(v+i);
            po=i;//for position
    }
    }
    printf("The largest = %f\n",l);
    printf("Position of largest = %d\n",po);

return 0;
}
double smallest(int n,double *v){//smallest
    int po=0;
    double l=*v;
    for(int i=0;i<n;i++){
        if(*(v+i)<l){
            l=*(v+i);
            po=i;
    }
    }
    printf("The smallest = %f\n",l);
    printf("Position of smallest = %d\n",po);

return 0;
}
int main(){
    int n;
    scanf("%d",&n);
    double *v,*w;//pointer to pass
    v=(double*)malloc(sizeof(double)*n);//dyanamic memory as size depends on n
    w=(double*)malloc(sizeof(double)*n);
    for(int i=0;i<n;i++)//first vector
        scanf("%lf",v+i);
    for(int i=0;i<n;i++)
        scanf("%lf",w+i);//second vector
    printf("Scalar product=%f\n",scalar(n,v,w));//printing product
    smallest(n,v);
    largest(n,v);//falling function
    smallest(n,w);
    largest(n,w);
    free(v);
    free(w);
    return 0;

}



