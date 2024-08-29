#include <bits/stdc++.h>
using namespace std;

int main()
{
    int *arr = new int[5]{40, 10, 43, 67, 81};

    sort(arr, arr + 5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}