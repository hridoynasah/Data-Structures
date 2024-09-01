#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 11, 20, 30, 11, 40, 50, 11};

    replace(v.begin(), v.end(), 11, 22);
    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}