#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>
#include <vector>
#include <fstream>

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

    friend istream& operator>>(istream& is, Student& en);

    public:
        //coonstructor prompt user to enter name and year
        Student();
        static int id;
        // generate ID
        void setStudentID();
        //enroll coureses
        void enroll();
        //view balance
        void viewBalance();
        //pay tutition
        void payTuition(int payment);
        //show status
        void showInfo();

        int static getID();

        virtual ~Student();

    protected:

    private:
};

istream& operator>>(istream& is, Student& en);

#endif // STUDENT_H
