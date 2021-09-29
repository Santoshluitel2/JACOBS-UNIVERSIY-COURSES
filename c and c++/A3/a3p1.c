#include<stdio.h>
int main ()
{
    float x;
    int n;
    int j;
    scanf("%f%d",&x,&n);
    if (n<=0)
        {

         printf("Input is invalid, reenter value\n");
         scanf("%d",&n);

         }


    else
        for(j=1;j<=n;j++){
                printf("%f\n",x);

        }


 return 0;
}
