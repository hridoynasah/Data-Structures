// String input with space

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cin >> x;
    // Error occurs
    cin.ignore();
    string str;
    getline(cin, str);
    cout << x << endl;
    cout << str << endl;

    return 0;
}