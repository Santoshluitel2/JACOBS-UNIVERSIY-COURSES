/*
CH-230-A
a10_p5.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <string> // defines standard C++ string class
using namespace std;

/* First C++ class */
class Critter
{
private:  // data members are private
	string name;
	double hunger;
	int boredom;
	double height;

public: // business logic methods are public
	// setter methods
	void setName(string& newname);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
    void setHeight(double newheight);
	// getter method
	int getHunger();
	// service method
	void print();
//making constructer
Critter();
Critter(string);
Critter(string, int, int,double=10.0);

int gethunger1();
double getdhunger(int);
};