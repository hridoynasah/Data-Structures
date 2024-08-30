#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Where do you wanna go?";
    stringstream ss;
    ss << str;

    string word;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;
    ss >> word;
    cout << word << endl;

    return 0;
}