#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int id;
    float cgpa;
    char name[20];

    // Constructor
    Student(int id, float cgpa, const char *name)
    {
        this->id = id;
        this->cgpa = cgpa;
        // Copy the name string into the class member
        strcpy(this->name, name);
    }

    // Function to display student details
    void show()
    {
        cout << "Student name: " << name << endl;
        cout << "Student id: " << id << endl;
        cout << "Student cgpa: " << cgpa << endl;
    }
};

Student fun()
{
    Student s(1826, 3.56, "Mr.Tony");
    return s;
}

int main()
{
    Student s = fun();
    s.show();

    return 0;
}
