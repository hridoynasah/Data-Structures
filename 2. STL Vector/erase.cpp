#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1, 2, 3, 4, 5};

    // Single value delete:
    // v.erase(v.begin() + 2);

    // Delete Multiple value:
    v.erase(v.begin() + 1, v.begin() + 3);
    for (int i : v)
    {
        cout << i << endl;
    }

    return 0;
}