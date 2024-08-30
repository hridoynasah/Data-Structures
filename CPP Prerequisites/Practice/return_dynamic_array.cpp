#include <bits/stdc++.h>
using namespace std;

int *dynamic_array()
{
    int *arr = new int[5]{5, 51, 10, 30, 56};

    return arr;
}

int main()
{
    int *arr = dynamic_array();

    sort(arr, arr + 5, greater<int>());

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}