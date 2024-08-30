// Standard library (Library of data structure)
// A vector is a type of array data structure.
// Vector is dynamic array.

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // 1.Initialise a vector:

    vector<int> v = {10, 30, 40, 50, 60};
    for (int i : v)
    {
        cout << i << " ";
    }

    cout << endl;

    // 2.Initialise with 0 or any other same value:
    // Complexity : O(N)
    vector<int> a(5, 0);
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;

    // 3.Coping vector :
    // Complexity : O(N)

    // Way  One: Coping from v1 to v2

    vector<int> v1 = {10, 20, 30, 40, 50};
    vector<int> v2(v1);

    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    // 4.Way two: Coping from v1 to v3
    // Complexity : O(N)

    vector<int> v3;
    v3 = v1;

    for (int i : v3)
    {
        cout << i << " ";
    }
    cout << endl;

    // 5.Coping an array to a vector:
    // Complexity : O(N)

    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> v4(arr, arr + 5);
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}