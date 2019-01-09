#ifndef FUNCTION_H_INCLUDED
#define FUNCTION_H_INCLUDED

#include "Person.h"
#include "Student.h"
#include "Worker.h"

#include <iostream>
#include <string>
#include <vector>
#include <fstream>


vector<Student> vec;
vector<Worker> vec2;

void loadDataFromFiles();
void loadStudentToVec();
void loadnumberOfStudents();
void loadnumberOfWorekr();
void loadWorkerTovec2();
void saveStudentToVec();
void saveWorkerToVec();
void savenumberOfStudents();
void saveNumberOfWorkers();
void createUser();
void createStudent();
void createWorker();
void showUser();
void showStudent();
void showWorker();
void deleteUser();
void deleteStudent();
void deleteWorker();


void loadDataFromFiles()
{
    loadnumberOfStudents();
    loadStudentToVec();
    loadnumberOfWorekr();
    loadWorkerTovec2();
}

void loadStudentToVec()
{
    ifstream in("savedStudent");
    int temp = Student::getNumberOfStudent();
    for ( int i = 0; i<temp ; i++)
    {
        Student e1;
        in >> e1;
        vec.push_back(e1);
    }

    in.close();


}

void loadWorkerTovec2()
{
    ifstream in("savedWorkers");
    int temp = Worker::getNumberOfWorker();
    for ( int i = 0; i<temp ; i++)
    {
        Worker e1;
        in >> e1;
        vec2.push_back(e1);
    }

    in.close();
}

void loadnumberOfStudents()
{
                    int tempnum;
                    ifstream inNum;
                    inNum.open ("numberOfStudent.txt");
                    inNum >> tempnum;
                    Student::setnumberOfStudents(tempnum);
}

void loadnumberOfWorekr()
{
                    int tempnum;
                    ifstream inNum;
                    inNum.open ("numberOfWorker.txt");
                    inNum >> tempnum;
                    Worker::setNumberOfWorker(tempnum);
}

void savenumberOfStudents()
{
                    ofstream outNum;
                    outNum.open ("numberOfStudent.txt");
                    outNum << Student::getNumberOfStudent();
}

void saveNumberOfWorkers()
{
                    ofstream outNum;
                    outNum.open ("numberOfWorker.txt");
                    outNum << Worker::getNumberOfWorker();
}

void createUser()
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

void createStudent()
{
                        cout << "Enter Student name:" << endl;
                        string temp;
                        cin>>temp;
                        Student st1 = Student(temp);
                        vec.push_back(st1);
}

void createWorker()
{
                        cout << "Enter Worker name:" << endl;
                        string temp;
                        cin>>temp;
                        Worker wrk = Worker(temp);
                        vec2.push_back(wrk);

}

void showUser()
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

void showStudent()
{
    cout << "\033[2J\033[1;1H";
                            for (int i=0; i<Student::getNumberOfStudent(); i++)
                                {
                                    cout << i+1<<" ";
                                    vec[i].showInfo();

                                }
                            cout<< "Press Enter" << endl;
                            cin.ignore();
                            cin.get();
}
void showWorker()
{
        cout << "\033[2J\033[1;1H";
                            for (int i=0; i<Worker::getNumberOfWorker(); i++)
                                {
                                    cout << i+1<<" ";
                                    vec2[i].showInfo();
                                }
                            cout<< "Press Enter" << endl;
                            cin.ignore();
                            cin.get();
}

void deleteUser()
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

void deleteStudent()
{
                    cout << "\033[2J\033[1;1H";
                    cout<< "Witch Student you want do delete?" << endl;
                    int choice ;
                    showStudent();
                    cout<< "Enter number" << endl;
                    cin >> choice;
                    vec.erase(vec.begin() + choice-1);
                    Student::numberOfStudent--;
}

void deleteWorker()
{
                    cout << "\033[2J\033[1;1H";
                    cout<< "Witch Worker you want do delete?" << endl;
                    showWorker();
                    cout<< "Enter number" << endl;
                    int choice ;
                    cin >> choice;
                    vec2.erase(vec2.begin() + choice-1);
                    Worker::numberOfWorker--;
}

void saveStudentToVec()
{
    for (int i =0; i< vec.size(); i++)
    {
                        ofstream out("savedStudent", fstream::app);
                        out << vec[i];
                        out.close();
                        savenumberOfStudents();
    }

}

void saveWorkerToVec()
{
    for (int i =0; i< vec2.size(); i++)
    {
                        ofstream out("savedWorkers", fstream::app);
                        out << vec2[i];
                        out.close();
                        saveNumberOfWorkers();
    }

}



#endif // FUNCTION_H_INCLUDED
