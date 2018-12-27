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
    string studentID;
    string courses;
    int tuitionBalance;
    int costOfCourse = 600;
    static int id;

    public:
        //coonstructor prompt user to enter name and year
        Student();

        // generate ID
        void setStudentID();
        //enroll coureses
        void enroll();
        //view balance
        void viewBalance();
        //pay tutition

        //show status


        virtual ~Student();

    protected:

    private:
};

#endif // STUDENT_H
