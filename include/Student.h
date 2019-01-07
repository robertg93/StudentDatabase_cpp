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
    int tuitionBalance=0;
    int costOfCourse = 600;
    static int numberOfStudent;

    friend istream& operator>>(istream& is, Student& en);
    friend ostream& operator<<(ostream& os, const Student& en);

    public:
        //coonstructor prompt user to enter name and year
        Student();
        Student(string name);
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

        void getFirstName();

        void static setnumberOfStudents(int num);

        int static getNumberOfStudent();



        virtual ~Student();

    protected:

    private:
};

istream& operator>>(istream& is, Student& en);
ostream& operator<<(ostream& os, const Student& en);

#endif // STUDENT_H
