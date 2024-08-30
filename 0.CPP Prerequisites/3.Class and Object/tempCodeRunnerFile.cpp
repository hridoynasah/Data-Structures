#include <bits/stdc++.h>
using namespace std;

class Student{
    public:
        char name[20];
        char id[20];
        float cgpa;

        void show(){
            cout << "Student name: " << name << endl;
            cout << "Student id: " << id << endl;
            cout << "Student cgpa: " << cgpa << endl;
        }
};

int main()
{
    Student s;
    strcpy(s.name,"Mr.Ghost");
    strcpy(s.id, "87643X74M09O");
    s.cgpa = 3.81;
    s.show();

    return 0;
}