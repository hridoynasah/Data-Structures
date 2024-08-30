#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str1 = "Hello";
    string str2 = " ";
    string str3 = "World";

    // String concatenation
    string str = str1 + str2 + str3;
    cout << str << endl;

    // Append another string (Concatenation)
    string f_name = "Jhon ";
    string l_name = "Chena";
    f_name.append(l_name);
    cout << f_name << endl;

    // Add a character to the last of the string
    string animal = "Cat";
    animal.push_back('t');
    cout << animal << endl;

    // Remove the last character of the string
    animal.pop_back();
    cout << animal << endl;

    // Earse characters from string (Kind of resize)
    string fruit = "Grapes are sour.";
    fruit.erase(3, 3); // Output : Gra are sour.
    cout << fruit << endl;

    // Replace a portion of the string
    string game = "Hridoy Moon";
    game.replace(7, 10, "Hasan");
    cout << game << endl;

    // Insert at specific postion
    string helo = "HelloWorld";
    helo.insert(5, " ");
    cout << helo << endl;

    return 0;
}