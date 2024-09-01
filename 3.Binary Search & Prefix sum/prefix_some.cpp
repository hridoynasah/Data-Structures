#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr, prefix_sum;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        arr.push_back(x);
    }
    int l, r;
    cin >> l >> r;
    l--;
    r--;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
        prefix_sum.push_back(sum);
    }

    if (l == 0)
    {
        cout << prefix_sum[r] << endl;
    }
    else
    {
        int ans = prefix_sum[r] - prefix_sum[l - 1];
        cout << ans << endl;
    }

    return 0;
}