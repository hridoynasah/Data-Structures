#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // Insert at specific position:
    v.insert(v.begin() + 2, 70);
    for (int i : v)
    {
        cout << i << endl;
    }
    cout << endl;

    // Insert vector inside a vector:
    vector<int> v2 = {1, 2, 3, 4, 5};
    vector<int> v3 = {11, 22, 33};

    v2.insert(v2.begin() + 2, v3.begin(), v3.end());

    for (int i : v2)
    {
        cout << i << endl;
    }
    cout << endl;

    return 0;
}