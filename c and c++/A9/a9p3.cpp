/*
CH-230-A
a9_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <iostream>
using namespace std;
float ab(float x){
    if(x>=0){
        return x;//if positive same value
 }
    else{
        return (-x);//if negative negative of that value
    }
}
int main()
{
   float x;
   cin>>x;
   cout<<"the absolute value is: "<<ab(x)<<endl;//printing and calling function
    return 0;
}
