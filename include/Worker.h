#ifndef WORKER_H
#define WORKER_H

#include "Person.h"
#include <iostream>
#include <string>
#include <vector>
#include <fstream>

class Worker : public Person
{
    public:
        Worker()=default;
        Worker(string name);
        ~Worker();
        void showInfo() override;
        static int numberOfWorker;
        void static setNumberOfWorker(int num);
        int static getNumberOfWorker();




    protected:

    private:
};




#endif // WORKER_H
