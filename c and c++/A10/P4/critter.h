#include <string> // defines standard C++ string class
using namespace std;

/* First C++ class */
class Critter
{
private:  // data members are private
	string name;
	int hunger;
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
Critter(string, int, int,double=10);
};