/*
CH-230-A
a10_p3.c
santosh luitel
sluitel@jacobs-university.de
*/
#include <string>
using namespace std;


class City
{
    private:
    string name;
    int pop;
    string mayor;
    double area;

    public:
    void setname(string newname);
    void setpop(int newpop);
    void setmayor(string newmayor);
    void setarea(double newarea);

    string getname();
    int getpop();
    string getmayor();
    double getarea();

    void print();

};
