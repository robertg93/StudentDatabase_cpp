#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;



class Student
{
private:
    string firstName;
    string lastName;
    int gradeYear;
    int studentID;
    string courses;
    int tuitionBalance;
    int costOfCourse = 600;

    public:
        //coonstructor prompt user to enter name and year
        Student();

        // generate ID

        //enroll coureses

        //view balance

        //pay tutition

        //show status


        virtual ~Student();

    protected:

    private:
};

#endif // STUDENT_H
