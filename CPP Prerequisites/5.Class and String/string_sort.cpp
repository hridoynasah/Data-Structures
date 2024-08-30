#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin, str);

    // Sort sequence :
    // Space > Special characters > Digits > Capital > Small letters.
    sort(str.begin(), str.end());

    for (char i : str)
    {
        cout << i;
    }

    return 0;
}