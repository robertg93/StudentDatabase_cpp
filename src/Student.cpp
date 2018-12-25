#include "Student.h"


Student::Student()
{
    cout << "Enter student first name: " << endl;
    cin >> this->firstName;

    cout << "Enter student last name: " << endl;
    cin >> this->lastName;

    cout << "Enter your grade year: \n 1 for freshman \n 2 for spohmore \n 3 for junior \n 4 for senior  " << endl;
    cin >> this->gradeYear;

    cout << firstName << " " << lastName << " " << gradeYear << endl;
    //int numberOfStudent;
    //cin >> numberOfStudent;

}

Student::~Student()
{
    //dtor
}
