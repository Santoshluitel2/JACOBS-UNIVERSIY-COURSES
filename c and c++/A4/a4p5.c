/*
CH-230-A
a4_p5.c
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
 char *pa;//initiating pointer
   pa= str;//referencing pointer to first element of array
 for (int i = 0; i < strlen(str); i++){//checking all vowel by incrasing pointer by 1 char
        if (*(pa +i)=='a' || *(pa + i) =='e' || *(pa + i)=='i' ||
           *(pa+i)=='o' || *(pa+i)=='u' || *(pa+i)=='A' ||
           *(pa+i)=='E' || *(pa+i)=='I' || *(pa+i)=='O' ||
           *(pa+i)=='U'){

           }
        else if((*(pa+i)>='a'&& *(pa+i)<='z') || (*(pa+i)>='A'&& *(pa+i)<='Z'))//if not vowel and valid character
        {
            n++;//counting
        }
    }
 return (n);//returning value
}


