/*
CH-230-A
a10_p2.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c;
	string name;
	int hunger;
	int age;
	int weight;

	cout << endl << "Please enter data: " << endl;
	cout << "Name: ";
	// cin >> name; will not work if name contains
	// spaces
	getline(cin, name);
	c.setName(name);
	cout << "Hunger: ";
	cin >> hunger;
	c.setHunger(hunger);
	cout<<"Age:";
	cin>>age;
	c.setAge(age);
	cout<<"Weight:";
	cin>>weight;
	c.setWeight(weight);

	cout << "You have created:" << endl;
	c.print();
        return 0;
}
