#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 4, 55, 20, 65};

    reverse(arr, arr + 5);

    for (int i : arr)
    {
        cout << i << " ";
    }

    return 0;
}