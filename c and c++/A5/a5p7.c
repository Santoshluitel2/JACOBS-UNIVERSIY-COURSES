/*
CH-230-A
a5_p7.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main(){
    char a[100],b[100],*p;//initiating variables
    fgets(a,100,stdin);
    fgets(b,100,stdin);
     for (int i=0;i <strlen(a);i++){ //to check the end of line
        if (a[i]=='\n')
            a[i]='\0';

    }
    for (int i=0;i<strlen(b);i++){
          if (b[i]== '\n')
               b[i]='\0';

    }
    p=(char*)malloc(sizeof(char)*(strlen(a)+strlen(b)));//dynamic memory
    strcpy(p,a);//copying from a to pointer p
    strcat(p,b);//concatenating b to p
    printf("Result of concatenation: %s\n",p);//printing result
    free(p);


return 0;
}
