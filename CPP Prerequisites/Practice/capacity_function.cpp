#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Bhai obostha to bhalo na!!!";
    cout << str.size() << endl;
    str.clear();
    cout << str << endl;
    if (str.empty())
    {
        cout << "String is empty." << endl;
    }
    else
    {
        cout << "String is not empty." << endl;
    }
    string str1 = "Despresion mai hai bhai!!!";

    str1.resize(5, 'A');
    cout << str1 << endl;

    str1.resize(8, 'A');
    cout << str1 << endl;

    reverse(str1.begin(), str1.end());
    cout << str1 << endl;

    return 0;
}