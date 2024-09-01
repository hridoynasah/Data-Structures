#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 20, 30, 40, 50};
    // Insert value at specific index
    v.insert(v.begin() + 3, 33);
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}