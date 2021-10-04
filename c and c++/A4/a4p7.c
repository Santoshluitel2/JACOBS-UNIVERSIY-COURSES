/*
CH-230-A
a4_p7.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int matrix(int mat[30][30], int n);//function for matrix
int diag(int mat[30][30],int n);//under main diagonal
int main(){
     int mat[30][30],n;
     scanf("%d",&n);//getting inputf
     for(int i=0;i<n;i++){//row
        for(int j=0;j<n;j++){//column for every row
            scanf("%d",&mat[i][j]);//input
        }
     }
     matrix(mat, n);//calling function
     diag(mat,n);
}
int matrix (int mat[30][30], int n){
    printf("The entered matrix is:\n");
    for(int i=0;i<n;i++){//printing in matrix form
         for(int j=0;j<n;j++){
            printf("%d ",mat[i][j]);
            }
            printf("\n");//new line for next row

    }
    return 0;
}
int diag(int mat[30][30], int n){
    printf("Under the main diagonal:\n");
    for(int i=0;i<n;i++){
         for(int j=0;j<i;j++){
             if(i>j){
             printf("%d ",mat[i][j]);//printing elemment where row is less than column
             }



               }
}


    printf("\n");//next line
return 0;
}
