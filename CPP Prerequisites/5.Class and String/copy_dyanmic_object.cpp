#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    Student(string name, int age)
    {
        this->name = name;
        this->age = age;
    }
    void show()
    {
        cout << "Student name: " << name << endl;
        cout << "Student age : " << age << endl;
    }
};

int main()
{
    Student *ghost = new Student("Mr.Ghost", 23);
    Student *miju = new Student("Mr.Miju", 26);

    // That's not the correct way
    // ghost = miju;
    // delete miju;
    *ghost = *miju;
    ghost->show();

    return 0;
}