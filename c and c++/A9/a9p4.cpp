/*
CH-230-A
a9_p4.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <iostream>

using namespace std;
int mycount(int a,int b){
    return b-a;

}
int mycount(char a,string st){
    int n=0;
    for(unsigned int i=0;i< st.length();i++){//counting number of ch and looping
            if(st[i]==a){//checking the character
                n++;//counting
            }

    }
   return n;
}


int main()
{
  cout<< mycount(7,3)<<endl;//calling fucntion
  cout<<mycount('i',"this is a string")<<endl;
 return 0;
}
