#include "City.h"
#include <iostream>


using namespace std;

void City::setname(std::string newname)
{
    name=newname;
}

void City::setpop(int newpop)
{
    pop=newpop;
}

 void City::setmayor(std::string newmayor)
 {
     mayor=newmayor;
 }

void City::setarea(double newarea)
{
    area=newarea;
}

string City::getname()
{
    return name;
}

int City::getpop()
{
    return pop;
}

string City::getmayor()
{
    return mayor;
}

double City::getarea()
{
    return area;
}

void City::print()
{
    cout<<"The name of city is  " << name << ". The population is " << pop<<endl;
    cout<<"Mayor of "<<name<<" is " << mayor << ". Area is " << area <<endl;

}
