#ifndef WORKER_H
#define WORKER_H

#include "Person.h"

class Worker : public Person
{
    public:
        Worker();
        Worker(string name);
        virtual ~Worker();
        void showInfo();
        static int numberOfWorker;
        void static setNumberOfWorker(int num);
        int static getNumberOfWorker();




    protected:

    private:
};




#endif // WORKER_H
