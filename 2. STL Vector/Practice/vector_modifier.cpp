#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    v.pop_back();

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;
    cout << "Front value: " << v.front() << endl;
    cout << "last  value: " << v.back() << endl;

    return 0;
}