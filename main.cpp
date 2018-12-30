#include <iostream>
#include "Student.h"

using namespace std;

int main()
{
    //Student *ptr = new Student();

     Student *ptr1 = new Student();

     ptr1->enroll();
     ptr1->payTuition(1000);
     ptr1->showInfo();

     //ask how many students
     cout << "enter number of students";
     int num;
     cin >> num;


     //create array of student object

     Student *tab = new Student[num];

    return 0;
}
