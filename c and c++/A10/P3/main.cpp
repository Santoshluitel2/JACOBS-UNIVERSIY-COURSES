/*
CH-230-A
a10_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <iostream>
#include "City.h"


int main()
{
    City bremen;
    bremen.setname("bremen");
    bremen.setmayor("Santosh");
    bremen.setarea(234.57);
    bremen.setpop(55000);
    
    City paris;
    paris.setname("paris");
    paris.setpop(102);
    paris.setmayor("Depak");
    paris.setarea(454.4);
    
    City london;
    london.setname("london");
    london.setpop(232);
    london.setmayor("Rahul"); 
    london.setarea(356.5);

    bremen.print();
    paris.print();
    london.print();
    return 0;
}
