#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Bhai ki obostha?";
    // str.begin() and str.end()
    string ::iterator it;
    for (it = str.begin(); it < str.end(); it++)
    {
        cout << *it << endl;
    }

    // easy way:
    for (auto it = str.begin(); it < str.end(); it++)
    {
        cout << *it << " ";
    }

    return 0;
}