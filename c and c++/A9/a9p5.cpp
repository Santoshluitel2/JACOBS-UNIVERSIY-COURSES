/*
CH-230-A
a9_p5.c
santosh luitel
sluitel@jacobs-university.de
*/
#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std ;
int main () {
   int die ;
   int guess;
   int count = 0;
   string name;
   cout<<"enter your name:"<<endl;
   cin>>name;
   int randomNumber ;
   srand ( static_cast < unsigned int >( time (0) ) );
   randomNumber = rand () ;
   die = ( randomNumber % 100) + 1;
  while (1) {
      count++;
     cout<<"guess the number:"<<endl;
     cin>>guess;
     if(guess==die){
            cout<<"congratulations "<<name<< " you guessed right"<<endl;
            exit(1);
     }
     else{
         cout<<"TRY "<<count<<endl;
        if(guess>die){
            cout<<"too high"<<endl;
        }
        else{
         cout<<"too low"<<endl;
        }
     }
 }
 return 0;
 }
