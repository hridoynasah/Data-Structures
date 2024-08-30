#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10, 30, 20, 30, 40, 50, 30, 70};

    // It returns vector iterator : iterator will be go to end.

    vector<int>::iterator it;
    it = find(v.begin(), v.end(), 30);

    if (it == v.end())
    {
        cout << "Not found" << endl;
    }
    else
    {
        cout << "Found" << endl;
    }

    cout << *it << endl;

    return 0;
}