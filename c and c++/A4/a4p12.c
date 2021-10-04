
/*
CH-230-A
a4_p12.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void replaceAll(char *str, char c, char e){//function to replace

    for(int i=0;i<strlen(str);i++){
        if( *(str+i)==c)//checking
            *(str+i)= e;//replacing if true
    }
}
int main(){
    char ch[80],c,e;
    while(1){

            printf("please enter string\n");
            fgets(ch,80,stdin);//getting string
            if (strcmp(ch,"stop\n") == 0)//if it is stop then loop will break
            {
            break;
            }
            char *p=ch;//pointer to be called by func
            printf("enter character to be replaced \n");
            scanf("%c",&c);
            printf("enter character to replace by\n");
            getchar();
            scanf("%c",&e);
            getchar();
            printf("the string is: %s",ch);
            replaceAll(p,c,e);//calling function
            printf("character to replace is %c\n",c);//printing
            printf("character to replace by is %c\n",e);
            printf("the replaced string is %s \n",ch);



    }
return 0;
}
