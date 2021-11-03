/*
CH-230-A
a5_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){

    int n;
    float *p;
    int temp;
    scanf("%d",&n);
    p= (float*)malloc(sizeof(float)*n);//dynamic memory
    for(int i=0;i<n;i++)//for only input
        scanf("%f",(p+i));
    for(int i=0;i<n;i++){//to check negative value
            if((*(p+i))<0){
                    temp=(p+i)-p;//getting numbers of element before negative values
                    break;
                }
    }
    printf("Before the first negative value: %d elements",temp);
    free(p);
return 0;
}
