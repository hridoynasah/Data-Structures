#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    Student(string name, int id)
    {
        this->name = name;
        this->id = id;
    }
    void show()
    {
        cout << "Student's name: " << name << endl;
        cout << "Student's id  : " << id << endl;
    }
};

Student *fun()
{
    Student *s = new Student("Hridoy", 1826);
    return s;
}

int main()
{
    Student *s = fun();
    s->show();
    cout << s->name << s->id << endl;

    return 0;
}