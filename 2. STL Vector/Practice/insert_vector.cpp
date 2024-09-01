#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Insert vector at specific index:
    vector<int> arr = {10, 30, 50, 90, 100};
    vector<int> v = {1, 2, 3, 4};

    arr.insert(arr.begin() + 3, v.begin(), v.end());
    for (int i : arr)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}