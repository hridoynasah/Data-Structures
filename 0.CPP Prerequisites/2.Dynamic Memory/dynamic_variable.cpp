#include <bits/stdc++.h>
using namespace std;

int main()
{
    int * val = new int;
    *val = 10;
    cout << *val << endl;

    delete(val);
    return 0;
}