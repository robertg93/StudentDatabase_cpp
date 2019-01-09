#include <iostream>

#include "function.h"


using namespace std;



int main()
{
    int option;
    loadDataFromFiles();

        do
        {
        cout << "\033[2J\033[1;1H";
        cout << "Enter the number to selcet ption: \n 1 Create new user \n 2 show users \n 3 Log in \n 4 delete user \n 0 Exit " << endl;

        cin >> option;

            if (option == 1)
                {
                    createUser();
                }
           else if (option == 2)
                {
                    showUser();
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
                    deleteUser();
                }
            else if (option == 0 ) continue;
            else
            {
                cout << "you enter wrong number press ENTER to try again" << endl;
                cin.ignore();
                cin.get();
            }

        }

    while(option != 0);

    saveStudentToVec();
    saveWorkerToVec();

    return 0;

}
