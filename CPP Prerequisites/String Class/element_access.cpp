#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Val lage na!";
    for (int i = 0; i < str.size(); i++)
    {
        cout << str[i] << " ";
        cout << str.at(i) << " ";
    }
    cout << endl;
    cout << str.back() << endl;
    cout << str.front() << endl;

    return 0;
}