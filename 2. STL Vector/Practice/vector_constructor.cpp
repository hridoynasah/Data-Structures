#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v2(5, 10);
    for (int i : v2)
    {
        cout << i << " ";
    }
    cout << endl;

    vector<int> v3 = {10, 20, 30};
    vector<int> v4(v3); // Or v4 = v3;

    for (int i : v4)
    {
        cout << i << " ";
    }
    cout << endl;

    int arr[5] = {4, 1, 6, 7, 9};
    vector<int> v5(arr, arr + 5);
    for (int i : v5)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}