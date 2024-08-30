#include <bits/stdc++.h>
using namespace std;

// We can't return static array.
int *Fun()
{
    int arr[5] = {10, 20, 30, 40, 50};
    return arr;
}

int main()
{
    int arr[5] = Fun();

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}