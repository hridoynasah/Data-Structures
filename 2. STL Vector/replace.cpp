#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 33, 20, 30, 40, 50, 30, 70};
    // Find and replace
    replace(v.begin(), v.end(), 30, 33);
    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}