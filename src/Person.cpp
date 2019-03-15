#include "Person.h"


using namespace std;


Person::Person()
{
    //ctor
}

Person::Person(string name):firstName(name)
{
    cout << "Enter student last name: " << endl;
    cin >> this->lastName;
}

Person::~Person()
{
    //cout << "dtor" << endl;
}
void Person::showInfo(){}


istream& operator>>(istream& is, Person& en)
{
    is >> en.firstName;
    is >> en.lastName;
    return is;
}

ostream& operator<<(ostream& os, const Person& en)
{
    os << en.firstName << " " << en.lastName << endl;
    return os;
}
