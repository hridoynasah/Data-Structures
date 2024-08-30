#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Tumi ki kokhonoi valo hobe na Masud?";

    stringstream ss;
    ss << str;

    string word;
    while (ss >> word)
    {
        cout << word << endl;
    }

    return 0;
}