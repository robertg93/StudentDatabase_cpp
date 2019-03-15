#include "Menu.h"
//#include "function.h"
using namespace std;
Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}


void Menu::runMenu()
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
}

void Menu::loadDataFromFiles()
{
    loadnumberOfStudents();
    loadStudentToVec();
    loadnumberOfWorekr();
    loadWorkerTovec2();
}

void Menu::loadStudentToVec()
{
    ifstream in("savedStudent");
    int temp = Student::getNumberOfStudent();
    for ( int i = 0; i<temp ; i++)
    {
        Student e1;
        in >> e1;
        Menu::vec.push_back(e1);
    }

    in.close();


}

void Menu::loadWorkerTovec2()
{
    ifstream in("savedWorkers");
    int temp = Worker::getNumberOfWorker();
    for ( int i = 0; i<temp ; i++)
    {
        Worker e1;
        in >> e1;
        Menu::vec2.push_back(e1);
    }

    in.close();
}

void Menu::loadnumberOfStudents()
{
                    int tempnum;
                    ifstream inNum;
                    inNum.open ("numberOfStudent.txt");
                    inNum >> tempnum;
                    Student::setnumberOfStudents(tempnum);
}

void Menu::loadnumberOfWorekr()
{
                    int tempnum;
                    ifstream inNum;
                    inNum.open ("numberOfWorker.txt");
                    inNum >> tempnum;
                    Worker::setNumberOfWorker(tempnum);
}

void Menu::savenumberOfStudents()
{
                    ofstream outNum;
                    outNum.open ("numberOfStudent.txt");
                    outNum << Student::getNumberOfStudent();
}

void Menu::saveNumberOfWorkers()
{
                    ofstream outNum;
                    outNum.open ("numberOfWorker.txt");
                    outNum << Worker::getNumberOfWorker();
}

void Menu::createUser()
{
                    cout << "Who you want to create? \n 1 Student \n 2 worker" << endl;
                    int choice ;
                    cin >> choice;
                    if (choice == 1)
                    {
                        createStudent();
                    }
                    else if (choice == 2)
                    {
                        createWorker();
                    }
                    else cout << "you enter wrong number" << endl;
}

void Menu::createStudent()
{
                        cout << "Enter Student name:" << endl;
                        string temp;
                        cin>>temp;
                        //Student st1 = Student(temp);
                        Menu::vec.push_back(Student(temp));
}

void Menu::createWorker()
{
                        cout << "Enter Worker name:" << endl;
                        string temp;
                        cin>>temp;
                        Worker wrk = Worker(temp);
                        Menu::vec2.push_back(wrk);

}

void Menu::showUser()
{
                    cout << "Show Student \n 1 Student \n 2 worker" << endl;
                    int choice ;
                    cin >> choice;
                    if (choice == 1)
                        {
                            showStudent();
                        }
                    else if (choice == 2)
                        {
                            showWorker();
                        }
                            else cout << "you enter wrong number" << endl;
}

void Menu::showStudent()
{
    cout << "\033[2J\033[1;1H";
                            for (int i=0; i<Student::getNumberOfStudent(); i++)
                                {
                                    cout << i+1<<" ";
                                    Menu::vec[i].showInfo();

                                }
                            cout<< "Press Enter" << endl;
                            cin.ignore();
                            cin.get();
}
void Menu::showWorker()
{
        cout << "\033[2J\033[1;1H";
                            for (int i=0; i<Worker::getNumberOfWorker(); i++)
                                {
                                    cout << i+1<<" ";
                                    Menu::vec2[i].showInfo();
                                }
                            cout<< "Press Enter" << endl;
                            cin.ignore();
                            cin.get();
}

void Menu::deleteUser()
{
                    cout << "\033[2J\033[1;1H";
                    cout<< "Witch user you want do delete: \n 1 Student \n 2 Worker" << endl;
                    int choice ;
                    cin >> choice;
                    if (choice == 1)
                        {
                            deleteStudent();
                        }
                    else if (choice == 2)
                        {
                            deleteWorker();
                        }
                            else cout << "you enter wrong number" << endl;

                    cin.ignore();
                    cin.get();

}

void Menu::deleteStudent()
{
                    cout << "\033[2J\033[1;1H";
                    cout<< "Witch Student you want do delete?" << endl;
                    int choice ;
                    showStudent();
                    cout<< "Enter number" << endl;
                    cin >> choice;
                    Menu::vec.erase(Menu::vec.begin() + choice-1);
                    Student::numberOfStudent--;
}

void Menu::deleteWorker()
{
                    cout << "\033[2J\033[1;1H";
                    cout<< "Witch Worker you want do delete?" << endl;
                    showWorker();
                    cout<< "Enter number" << endl;
                    int choice ;
                    cin >> choice;
                    Menu::vec2.erase(Menu::vec2.begin() + choice-1);
                    Worker::numberOfWorker--;
}

void Menu::saveStudentToVec()
{
    for (int i =0; i< Menu::vec.size(); i++)
    {
                        ofstream out("savedStudent", fstream::app);
                        out << vec[i];
                        out.close();
                        savenumberOfStudents();
    }

}

void Menu::saveWorkerToVec()
{
    for (int i =0; i< Menu::vec2.size(); i++)
    {
                        ofstream out("savedWorkers", fstream::app);
                        out << Menu::vec2[i];
                        out.close();
                        saveNumberOfWorkers();
    }

}
