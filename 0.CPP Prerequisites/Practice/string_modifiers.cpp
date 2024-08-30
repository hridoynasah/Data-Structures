#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Hello,", str1 = "World";

    cout << str + str1 << endl;
    str.append(str1);
    cout << str << endl;
    str.push_back('!');
    cout << str << endl;
    str.pop_back();
    cout << str << endl;

    str.erase(5); // 0 to less than 5
    cout << str << endl;

    string str2 = "Nothing serious.";
    str2.erase(5, 7); // Erase index 5 to 7
    cout << str2 << endl;
    string str3 = "Nice work";
    str3.replace(5, 7, "job");
    cout << str3 << endl;

    string str4 = "HelloWorld";
    str4.insert(5, " ");
    cout << str4 << endl;

    return 0;
}