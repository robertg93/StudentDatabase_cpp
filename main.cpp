#include <iostream>
#include "Student.h"

using namespace std;
vector<Student> vec;
void loadUserToVec();
void loadNumberOfObjects();
void saveNumberOfobjects();



int main()
{
    int option;
    loadNumberOfObjects();
    loadUserToVec();

        do
        {
        cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 2 show users \n 3 Log in \n 4 delete user \n 0 Exit " << endl;

        cin >> option;

            if (option == 1)
                {
                    cout << "Enter Student name:" << endl;
                    string temp;
                    cin>>temp;
                    Student ptr1 = Student(temp);
                    vec.push_back(ptr1);
                    ofstream out("savedUsers", fstream::app);
                    out << ptr1;
                    out.close();
                    saveNumberOfobjects();

                }

           else if (option == 2)
                {
                    cout << "\033[2J\033[1;1H";
                    for (int i=0; i<Student::getNumberOfStudent(); i++)
                    {
                        vec[i].showInfo();

                    }

                    cin.ignore();
                    cin.get();
                }

            else if (option == 3)
                {
                    cout << "\033[2J\033[1;1H";
                    cout<< "You are logged in" << endl;

                    cin.ignore();
                    cin.get();
                }

           else if (option == 4)
                {
                    cout << "\033[2J\033[1;1H";
                    cout<< "User was deleted" << endl;

                    cin.ignore();
                    cin.get();
                }
            else
            {
                cout << "you enter wrong number press ENTER" << endl;
                cin.ignore();
                cin.get();
            }

        }

    while(option != 0);

    return 0;

}

void loadUserToVec()
{
    ifstream in("savedUsers");
    int temp = Student::getNumberOfStudent();
    for ( int i = 0; i<temp ; i++)
    {
        Student e1;
        in >> e1;
        vec.push_back(e1);
    }

    in.close();


}


void loadNumberOfObjects()
{
                    int tempnum;
                    ifstream inNum;
                    inNum.open ("numberOfObject.txt");
                    inNum >> tempnum;
                    Student::setnumberOfStudents(tempnum);
}

void saveNumberOfobjects()
{
                    ofstream outNum;
                    outNum.open ("numberOfObject.txt");
                    outNum << Student::getNumberOfStudent();
}
