/*
CH-230-A
a3_p7.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
void print_form(int,int,char);//function to print shape
 int main(){
     int n,m;
     char c;
     printf("please enter height:\n");
     scanf("%d",&n);//getting height
     getchar();
     printf("please enter base\n");
     scanf("%d",&m);//getting base
     getchar();
     printf("please input character\n");
     scanf("%c",&c);//character for shape
     print_form(n,m,c);//calling function

 return 0;
}
void print_form(int n, int m, char c){//function for printing area
    int i,j;
    for(i=1;i<=n;i++){//loop for number of lines
        for(j=1;j<=m;j++){//loop for number of elements in a line
            printf("%c",c);//printing element
            }
          printf("\n");//next line
          m=m+1;//gradual addition for area like geometry
        }
}

