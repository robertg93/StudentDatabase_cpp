#include <iostream>
#include "Student.h"

using namespace std;
vector<Student> vec;

int main()
{
    int option;
    //Student *ptr = new Student();
        do
        {
        cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 2 show users \n 0 Exit " << endl;

        cin >> option;

            if (option == 1)
                {
                    Student ptr1 = Student();
                    vec.push_back(ptr1);

                }

            if (option == 2)
                {
                    cout << "\033[2J\033[1;1H";
                    vec[0].showInfo();
                    cin.ignore();
                    cin.get();
                }
        }

    while(option != 0);

    return 0;
    /*
     Student *ptr1 = new Student();

     ptr1->enroll();
     ptr1->payTuition(1000);
     ptr1->showInfo();
     ptr1->payTuition(200);

     //ask how many students
     cout << "enter number of students";
     int num;
     cin >> num;


     //create array of student object

     Student *tab = new Student[num ];

    return 0;
    */
}
