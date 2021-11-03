/*
CH-230-A
a6_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
//i am not sure to define or not
//as it was not asked in question

int main(){
    int n,pr=0;
    int *x,*y;
    scanf("%d",&n);
    x=(int*)malloc(sizeof(int)*n);//dynamic memory for array
    y=(int*)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",(x+i));//gettting input
    for(int i=0;i<n;i++)
        scanf("%d",(y+i));
    for(int i=0;i<n;i++){
         pr= pr+  ((*(x+i)) * (*(y+i)));
    }
    #ifdef INTERMEDIATE//checking if it is defined
        printf("The intermediate product values are:\n");
        for(int i=0;i<n;i++)
            printf("%d\n",((*(x+i)) * (*(y+i))));//printing
    #endif // Intermediate



    printf("The scalar product is: %d",pr);
    free(x);
    free(y);


    return 0;
}
