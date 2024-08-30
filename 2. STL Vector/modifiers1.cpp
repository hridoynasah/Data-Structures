#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);

    cout << "After push back: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    v.pop_back();
    cout << "After pop back: " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}