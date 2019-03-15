#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>


using namespace std;



class Student: public Person
{
private:

    int gradeYear;
    string studentID;
    string courses;
    int tuitionBalance=0;
    int costOfCourse = 600;

    public:
        //coonstructor prompt user to enter name and year
        Student();
        Student(string name);
        Student(const Student&) = default;
        static int numberOfStudent;



        static int id;
        // generate ID
        //static void createStudent();




        void setStudentID();
        //enroll coureses
        void enroll();
        //view balance
        void viewBalance();
        //pay tutition
        void payTuition(int payment);
        //show status
        void showInfo() override;

        void getFirstName() const;

        void static setnumberOfStudents(int num);

        int static getNumberOfStudent();



        virtual ~Student();

    protected:

    private:
};


#endif // STUDENT_H
