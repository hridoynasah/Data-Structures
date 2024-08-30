#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str = "Ki obostha bhai?";

    // .size() -> returns the size of the string
    cout << str.size() << endl;

    // .empty() -> returns true or false if the string is empty
    if (str.empty() == true)
        cout << "Empty" << endl;
    else
        cout << "Not empty" << endl;

    // .clear() -> clears the string
    str.clear();
    cout << str << endl;
    cout << str.size() << endl;

    string input = "Bhaiya bhalo to?";

    // .resize() -> resize to a new value
    input.resize(4);
    cout << input << endl;
    input.resize(10, 'F');
    cout << input << endl;

    return 0;
}