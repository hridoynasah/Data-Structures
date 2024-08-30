// Creating namespace
#include <bits/stdc++.h>
using namespace std;

namespace Hridoy
{
    string name = "Mr.Ghost";
    int age = 23;
    void sum_two()
    {
        int a = 10;
        int b = 3;
        cout << (a + b) << endl;
    }
}

using namespace Hridoy;

int main()
{
    sum_two();
    return 0;
}