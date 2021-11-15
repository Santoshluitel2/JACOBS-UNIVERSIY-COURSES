#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	Critter c1;
    Critter c2("NAMEONLY");
    Critter c3("name",5,6,167.0);
    Critter c4("newname",7,9);
    c3.setHunger(2);
	c4.setHunger(2);

    c1.print();
    c2.print();
    c3.print();
    c4.print();
return 0;
}

