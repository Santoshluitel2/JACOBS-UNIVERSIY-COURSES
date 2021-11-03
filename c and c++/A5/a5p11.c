/*
CH-230-A
a5_p11.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int prime(int x,int n);//function to count


int main(){
    int x;
    scanf("%d",&x);//getting input
    if(x== 1  || prime(x/2,x)==0)//checking the return of function
    printf("%d is not prime\n",x);
    else if(prime(x/2,x)==1)
        printf("%d is prime\n",x);
    return 0;
  }

int prime(int x,int n){
    if(x==1)
       return 1;//making easy for recursive func

    else{
            if(n%x==0)
                return 0;

            else
              return prime(x-1,n);//using recursive function

}

}




