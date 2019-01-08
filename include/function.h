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
void savenumberOfStudents();
void saveNumberOfWorkers();
void createStudent();
void createWorker();
void showStudent();
void showWorker();


void loadDataFromFiles()
{
    loadnumberOfStudents();
    loadStudentToVec();
    loadnumberOfWorekr();
    loadWorkerTovec2();
}

void loadStudentToVec()
{
    ifstream in("savedStudents");
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


void createStudent()
{
                        cout << "Enter Student name:" << endl;
                        string temp;
                        cin>>temp;
                        Student st1 = Student(temp);
                        vec.push_back(st1);
                        ofstream out("savedStudent", fstream::app);
                        out << st1;
                        out.close();
                        savenumberOfStudents();
}

void createWorker()
{
                        cout << "Enter Worker name:" << endl;
                        string temp;
                        cin>>temp;
                        Worker wrk = Worker(temp);
                        vec2.push_back(wrk);
                        ofstream out3("savedWorkers", fstream::app);
                        out3 << wrk;
                        out3.close();
                        saveNumberOfWorkers();

}

void showStudent()
{
    cout << "\033[2J\033[1;1H";
                            for (int i=0; i<Student::getNumberOfStudent(); i++)
                                {
                                    vec[i].showInfo();

                                }
                            cin.ignore();
                            cin.get();
}
void showWorker()
{
        cout << "\033[2J\033[1;1H";
                            for (int i=0; i<Worker::getNumberOfWorker(); i++)
                                {
                                    vec2[i].showInfo();
                                }
                            cin.ignore();
                            cin.get();
}


#endif // FUNCTION_H_INCLUDED
