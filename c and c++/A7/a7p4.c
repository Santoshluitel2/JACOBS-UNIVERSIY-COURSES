/*
CH-230-A
a7_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include <string.h>
//i could not find what is wrong
//it does not show in grader as well
void uppercase(char ch[]){
    for(int i=0;i<=strlen(ch);i++){
          printf("%c",toupper(ch[i]));
    }


}
void lowercase(char ch[]){
    for(int i=0;i<=strlen(ch);i++){
          printf("%c",tolower(ch[i]));
    }


}
void mixed(char ch[]){
    for(int i=0;i<=strlen(ch);i++){
          if((ch[i]>='a'&& ch[i]<='z'))
               printf("%c",toupper(ch[i]));
          else
            printf("%c",tolower(ch[i]));
    }


}
void quit(char ch[]){
    exit(1);

}
int main(){
    int n;
    char ch[100];
    void (*ptr[4])(char*)={uppercase,lowercase,mixed,quit};
    fgets(ch,sizeof(ch),stdin);
    while(1){
        scanf("%d",&n);
        ptr[n-1](ch);
    }


return 0;
}
