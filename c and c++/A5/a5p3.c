/*
CH-230-A
a5_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int count_lower(char* str){//function to count
    int n=0;
    for(int i=0;i<strlen(str);i++){
        if(*(str+i)>= 'a' && *(str +i)<='z' ){//checking if it lies between a and z
            n=n+1;//adding up
        }
    }


return n;
}
int main(){
    while(1){
        char str[51];
        char* p= str;//pointer to pass to function
        printf("enter a string:\n");
        fgets(str,51,stdin);//getting input
        if(strlen(str)==1)//if user enter empty string
            break;
        printf("there are %d lowecase characters\n",count_lower(p));//printing the value given by function
   }

  return 0;
}

