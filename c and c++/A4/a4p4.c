/*
CH-230-A
a4_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int count_consonants(char str[]);
int main(){

     char str[100], temp[100];//initiating varibale
     int i=0;
     for(i=0;i<100;i++){
          fgets(str,100,stdin);//gettting input
          if(strlen(str)==1){//until no character input
            break;
          }
          temp[i]= count_consonants(str);//to print all in last

     }
     for(int j=0;j<i;j++){
            printf("Number of consonants=%d\n",temp[j]);//printing at last

     }


 return 0;

}
int count_consonants(char str[]){//function to count
 int n=0;
 for (int i = 0; i < strlen(str); i++){//checking all vowel
        if (str[i]=='a' || str[i]=='e' || str[i]=='i' ||
           str[i]=='o' || str[i]=='u' || str[i]=='A' ||
           str[i]=='E' || str[i]=='I' || str[i]=='O' ||
           str[i]=='U'){

           }
        else if((str[i]>='a'&& str[i]<='z') || (str[i]>='A'&& str[i]<='Z'))//if not vowel and valid character
        {
            n++;//counting
        }
    }
 return (n);//returning value
}

