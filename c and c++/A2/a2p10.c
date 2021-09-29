/*
CH-230-A
a2_p9.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main ()
{
    int n;
    printf("Enter a integer:\n");
    scanf("%d",&n);
    int i=2;

    while(n<=0)
    {
        printf("please enter a valid number\n");
        scanf("%d",&n);
        }
    printf("1 day = 24 hours\n");// could not include singular day in loop
    while(n>=i)
    {
        printf("%d days = %d hours\n",i,i*24);
        i++;

    }

 return 0;
}
