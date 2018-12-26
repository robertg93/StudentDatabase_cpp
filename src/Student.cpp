#include "Student.h"

int  Student::id = 1000;
Student::Student()
{

    cout << "Enter student first name: " << endl;
    cin >> this->firstName;

    cout << "Enter student last name: " << endl;
    cin >> this->lastName;

    cout << "Enter your grade year: \n 1 for freshman \n 2 for spohmore \n 3 for junior \n 4 for senior  " << endl;
    cin >> this->gradeYear;
    setStudentID();

    cout << firstName << " " << lastName << " " << gradeYear << " " << studentID << endl;
    //int numberOfStudent;
    //cin >> numberOfStudent;
    id++;
}

void Student::setStudentID()
{
    studentID = to_string(gradeYear) + to_string(id);
}

void Student::enroll()
{
    cout<< " Enter course to enroll(0 to quit" << endl;

}

Student::~Student()
{
    id--;
}
