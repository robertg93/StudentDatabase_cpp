#include "Worker.h"

Worker::Worker()
{
    //ctor
}
Worker::Worker(string name): Person(name)
{

}

void Worker::showInfo()
{
    cout << "Name: " << firstName << " " << lastName << endl;
    //cout << "Courses endrolled" << courses << endl;
    //cout << "Your balance: " << tuitionBalance << endl;
}


Worker::~Worker()
{
    //dtor
}

