/*
CH-230-A
a9_p6.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <iostream>
#include<cstdlib>
#include<math.h>
using namespace std;

int myfirst(int arr[]){
    int temp1;
    for(int i=0;i<5;i++){
        if(arr[i]>=0 && arr[i]%2==0){//checking value
                temp1=arr[i];
                return temp1;
    }}

return -1;
}


int myfirst(double arr[]){
    int temp1;
    for(int i=0;i<5;i++){
        if(arr[i]<=0 && floor(arr[i]==ceil(arr[i]))){
                temp1=arr[i];
                return temp1;
    }}

return -1;
}
char myfirst(char str[]){
    for (int i = 0; i < 5; i++){//checking all vowel
        if (str[i]!='a' && str[i]!='e' && str[i]!='i' &&
           str[i]!='o' && str[i]!='u' && str[i]!='A' &&
           str[i]!='E' && str[i]!='I' && str[i]!='O' &&
           str[i]!='U'){
               return str[i];
           }}

return '0' ;
}
int main(){
     int arr1[5]={-6,10,8,3,13};//giving input
     double arr2[5]={3.4,6.2,-8,17,9};
     char arr3[5]={'a','e','f','m','r'};
     cout<<myfirst(arr1)<<endl;//calling functions
     cout<<myfirst(arr2)<<endl;
    cout<<myfirst(arr3)<<endl;
     return 0;


}




