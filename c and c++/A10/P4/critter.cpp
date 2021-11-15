#include <iostream>
#include "Critter.h"

using namespace std;

Critter::Critter(){

    name="default_critter";
	hunger=0;
	height=5;
	boredom=0;
}
Critter::Critter(string newname)
{
	name=newname;
	hunger=0;
	height=5;
	boredom=0;

}

Critter::Critter(string newname,int newhunger,int newboredom,double newheight)
{
	name=newname;
	hunger=newhunger;
	boredom=newboredom;
	height=newheight;
}

void Critter::setName(string& newname) {
	name = newname;
}

void Critter::setHunger(int newhunger) {
	hunger = newhunger;

}
void Critter::setBoredom(int newboredom){
    boredom=newboredom;
}
void Critter::setHeight(double newheight){
    height=newheight;
}

void Critter::print() {
	cout << "I am " << name << ". My hunger level is " << hunger << "." << endl;
    cout<<"my boredom is "<<boredom<<" my height is "<<height<<endl;
}

int Critter::getHunger() {
	return hunger;
}