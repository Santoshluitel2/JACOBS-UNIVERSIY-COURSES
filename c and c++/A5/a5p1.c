
/*
CH-230-A
a5_p1.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
void triangle(char c,int n){
    int x=0;
    for(int i=n;i>0;i--){//this loop will run for height
        for(int j=0;j<n-x;j++){//this is decreasing  for every line
            printf("%c",c);
            }
        printf("\n");//new line
        x=x+1;
    }

  }
  int main(){
      int n;
      char c;
      scanf("%d",&n);
      getchar();
      scanf("%c",&c);
      triangle(c,n);//calling function
     return 0;
  }
