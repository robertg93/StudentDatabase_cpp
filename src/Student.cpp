#include "Student.h"


int Student::numberOfStudent=0;
int  Student::id = 1000;
Student::Student(){}
Student::Student(string name):Person(name)
{



    cout << "Enter your grade year: \n 1 for freshman \n 2 for spohmore \n 3 for junior \n 4 for senior  " << endl;
    cin >> this->gradeYear;
    setStudentID();

    cout << "Student first name: " << firstName << endl;
    cout << "Student last name:  " << lastName << endl;
    cout << "Student grade year: " << gradeYear << endl;
    cout << "Student ID:         " << studentID << endl;

    numberOfStudent++;
    id++;
}

void Student::setStudentID()
{
    studentID = to_string(gradeYear) + to_string(id);
}

void Student::enroll()
{
    string quit = "null";
    while (quit != "Q" )
    {
        cout<< " Enter course to enroll(Q to quit) " << endl;
        cin >> quit;

        if (quit != "Q")
            {
                courses = courses  + quit + "\n" ;
                tuitionBalance += 600;
                //cout << courses << endl;

            }

    }

    cout<< " Enrolled in : \n"<< courses << endl;
    //cout<< " titution balance "  << tuitionBalance << endl;
}

void Student::viewBalance()
{
    cout << "Your balance is: " << tuitionBalance << "$" << endl;
}

void Student::payTuition(int payment)
{
    tuitionBalance = tuitionBalance - payment;
     cout << "Thank you for your payment  " << payment;
     viewBalance();

}
void Student::getFirstName()
{
    cout<<firstName<<endl;
}

 void Student::setnumberOfStudents(int num)
        {
            numberOfStudent=num;
        }

int Student::getNumberOfStudent()
        {
            return numberOfStudent;
        }

void Student::showInfo()
{
    cout <<  firstName << " " << lastName << endl;
    //cout << "Courses endrolled" << courses << endl;
    //cout << "Your balance: " << tuitionBalance << endl;
}



Student::~Student()
{
    id--;
}

/*
istream& operator>>(istream& is, Student& en)
{
    is >> en.firstName;
    is >> en.lastName;
    return is;
}

ostream& operator<<(ostream& os, const Student& en)
{
    os << en.firstName << " " << en.lastName << endl;
    return os;
}*/
