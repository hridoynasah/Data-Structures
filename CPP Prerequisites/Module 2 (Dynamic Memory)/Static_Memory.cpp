#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    // Now we can't change the memory size
    arr[8] = {60, 70, 80};

    return 0;
}