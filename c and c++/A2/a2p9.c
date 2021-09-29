/*
CH-230-A
a2_p9.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
int main () {
    char ch;
    scanf("%c",&ch);
     if((ch >= 97 && ch <= 122) || (ch >= 65 && ch <= 90))
     {
         printf("%c is a letter\n",ch);
     }
     else if(ch >= 48 && ch <= 57)
     {
         printf("%c is a digit\n",ch);
     }
     else
     {
         printf("%c is some other symbol\n",ch);

     }



 return 0;
}
