#include <bits/stdc++.h>
using namespace std;

int *Fun()
{
    int *arr = new int[5]{10, 23, 36, 47, 451};

    return arr;
}

int main()
{
    int *arr = Fun();

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " " << endl;
    }

    return 0;
}