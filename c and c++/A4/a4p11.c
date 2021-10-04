
/*
CH-230-A
a4_p11.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int count_insensitive(char *str, char c){//function to count
    int n=0,i=0;
    while(i< strlen(str))//counting character by charcter
    {
        if(tolower(*(str +i))==c){//checking if it matches
            n++;//counting occurances
        }
        i++;
    }
return n;//returning values
}
int main(){
    char *str1,*str2;
    str1 =(char*)malloc(sizeof(char)*50);//declaring  dynamic memory//first memory
    printf("enter string\n");
    fgets(str1,50,stdin);//getting input
    str2= (char*)malloc(sizeof(char)* strlen(str1));//2nd input
    strcpy(str2,str1);//copying
    free(str1);//freeing memory
    printf("the character 'b' occur %d times\n",count_insensitive(str2,'b'));//printing
    printf("the character 'h' occur %d times\n",count_insensitive(str2,'h'));
    printf("the character '8' occur %d times\n",count_insensitive(str2,'8'));
    printf("the character 'u' occur %d times\n",count_insensitive(str2,'u'));
    printf("the character '$' occur %d times\n",count_insensitive(str2,'$'));





   free(str2);//free

return 0;

}


