/*
CH-230-A
a3_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main () {
    char ch;
    int n;
    int i;
    printf("Enter a lowercase character:\n");
    scanf("%c",&ch);//asking input of character
    printf("Enter a integer:\n");
    scanf("%d",&n);//asking input of integer
    for(i=0;i<=n;i++){//running until it is printed n+1 times
        printf("%c\n",ch);//printing character
        ch=ch-1;//subtracting one character

    }


 return 0;
}
