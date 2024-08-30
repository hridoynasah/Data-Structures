#include <bits/stdc++.h>
using namespace std;

int main()
{
    // https://cplusplus.com/reference/string/string/string/

    string str("Hello, World");
    cout << str << endl;

    string str1("Hello, world", 5);
    cout << str1 << endl;

    string str2("Hello, world", 7, 11);
    cout << str2 << endl;

    string str3(7, 'M');
    cout << str3 << endl;

    string str4(10, 42); // 42 is the ASCII code for '*'
    cout << str4 << endl;

    string str5(str.begin(), str.begin() + 5);
    cout << str5 << endl;

    return 0;
}