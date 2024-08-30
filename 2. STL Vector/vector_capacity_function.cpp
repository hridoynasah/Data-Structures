#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};

    cout << v.size() << endl;

    // Clears the vector.
    v.clear();
    for (int i : v)
    {
        cout << i << " ";
    }
    // Returns true if the vector is empty.

    if (v.empty())
    {
        cout << "Vector is empty.";
    }
    else
    {
        cout << "Vector is not empty.";
    }
    cout << endl;

    // Resize the vector
    // O(K); where K is the difference between new size and current size.

    vector<int> v2 = {10, 20, 30, 40, 50};
    v2.resize(2);
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v3 = {10, 20, 30, 40, 50};
    v3.resize(10, 1);
    for (int i : v3)
    {
        cout << i << " ";
    }

    return 0;
}