#include <iostream>
#include "Student.h"

using namespace std;
vector<Student> vec;
void loadUserToVec();

int main()
{
    int option;

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

}

void loadUserToVec()
{
    ifstream in("savedUsers");
    int temp = vec.size();
    for ( int i = 0; i<temp ; i++)
    {
        Student e1;
        in >> e1;
        vec.push_back(e1);
    }

    in.close();


}
