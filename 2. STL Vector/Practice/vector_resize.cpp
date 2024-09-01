#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {11, 22, 30, 40};
    v.resize(2);
    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.resize(4, 10);

    for (int i : v)
    {
        cout << i << " ";
    }

    return 0;
}