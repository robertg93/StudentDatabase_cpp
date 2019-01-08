#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>
using namespace std;

class Person
{
    public:
        Person();
        Person(string name);
        virtual ~Person();
        friend istream& operator>>(istream& is, Person& en);
        friend ostream& operator<<(ostream& os, const Person& en);
        virtual void showInfo()=0;

    protected:
        string firstName;
        string lastName;

    private:



};


        istream& operator>>(istream& is, Person& en);
        ostream& operator<<(ostream& os, const Person& en);

#endif // PERSON_H
