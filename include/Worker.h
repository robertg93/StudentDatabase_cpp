#ifndef WORKER_H
#define WORKER_H

#include <Person.h>


class Worker : public Person
{
    public:
        Worker();
        Worker(string name);
        virtual ~Worker();
        void showInfo();




    protected:

    private:
};




#endif // WORKER_H
