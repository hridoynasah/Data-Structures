#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> v;
    int n;
    cin >> n;
    // Without space
    while (n--)
    {
        string s;
        cin >> s;
        v.push_back(s);
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << endl;
    }

    return 0;
}