#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Check whether a character is vowel or consonant? " << endl;
    cout << "Enter a character: ";
    char input;
    cin >> input;
    input = tolower(input);

    switch (input)
    {
    case 'a':
        cout << "Vowel" << endl;
        break;
    case 'e':
        cout << "Vowel" << endl;
        break;
    case 'i':
        cout << "Vowel" << endl;
        break;
    case 'o':
        cout << "Vowel" << endl;
        break;
    case 'u':
        cout << "Vowel" << endl;
        break;

    default:
        cout << "Consonant" << endl;
    }

    return 0;
}