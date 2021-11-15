/*
CH-230-A
a10_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <iostream>
#include "Critter.h"

using namespace std;

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;
}
void Critter::setAge(int newage){
    age=newage;
}
void Critter::setWeight(int newWeight){
    weight=newWeight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
	cout<<"My Weight is "<< weight<<". My age is "<< age<<"."<<endl;
}

int Critter::getHunger() {
	return hunger;
}
