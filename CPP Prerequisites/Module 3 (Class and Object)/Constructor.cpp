#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;
    char name[20];

    Student()
    {
        cout << "Constructor is called at the time of object creation." << endl;
    }
    void setInfo()
    {
        id = 1826;
        cgpa = 3.81;
        strcpy(name, "Mr.Ghost");
    }

    void show()
    {
        cout << "Student name: " << name << endl;
        cout << "Student id: " << id << endl;
        cout << "Student cgpa: " << cgpa << endl;
    }
};

int main()
{
    Student s;
    s.setInfo();
    s.show();
    return 0;
}