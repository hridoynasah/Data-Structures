#include <bits/stdc++.h>
using namespace std;

void reverseWord(stringstream &ss)
{
    string word;
    if (ss >> word)
    {
        reverseWord(ss);
        cout << word << endl;
        }
}

int main()
{
    string str;
    getline(cin, str);
    stringstream ss;
    ss << str;
    reverseWord(ss);

    return 0;
}