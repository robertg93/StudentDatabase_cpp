#ifndef MENU_H
#define MENU_H
#include <vector>
#include "Student.h"
#include "Worker.h"

class Menu
{
    public:
        std::vector <Student> vec;
        std::vector <Worker> vec2;
        Menu();
        virtual ~Menu();

        void runMenu();



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




    protected:

    private:
};

#endif // MENU_H
