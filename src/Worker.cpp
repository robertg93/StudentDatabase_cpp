#include "Worker.h"

int Worker::numberOfWorker=0;


Worker::Worker()
{
    //ctor
}
Worker::Worker(string name): Person(name)
{
    numberOfWorker++;
}

void Worker::showInfo()
{
    cout << firstName << " " << lastName << endl;
    //cout << "Courses endrolled" << courses << endl;
    //cout << "Your balance: " << tuitionBalance << endl;
}

void Worker::setNumberOfWorker(int num)
{
    numberOfWorker=num;
}

int Worker::getNumberOfWorker()
{
    return numberOfWorker;
}


Worker::~Worker()
{
   //dtor
}

