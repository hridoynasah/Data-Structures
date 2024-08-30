#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Creating and  initilising dynamic array:
    int *arr = new int[5]{1, 2, 3, 4, 5};

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    // Delete dynamic memory allocation:
    delete[] arr;

    return 0;
}