#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;
    char name[20];

    Student(int id, float cgpa, const char *name)
    {
        this->id = id;
        this->cgpa = cgpa;
        strcpy(this->name, name);
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
    Student *s = new Student(1826, 3.56, "Mr.Tony");
    s->show();
    delete s;

    return 0;
}
