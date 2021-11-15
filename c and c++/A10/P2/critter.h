/*
CH-230-A
a10_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <string> // defines standard C++ string class
/* First C++ class */
class Critter
{
private:  // data members are private
	std::string name;
	int hunger;
	int boredom;
	double height;
	int weight;
	int age;

public: // business logic methods are public
	// setter methods
	void setName(std::string& newname);
	void setWeight(int newweight);
	void setAge(int newage);
	void setHunger(int newhunger);
	void setBoredom(int newboredom);
	// getter method
	int getHunger();
	// service method
	void print();
};
