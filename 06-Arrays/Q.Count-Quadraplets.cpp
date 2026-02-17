#include <bits/stdc++.h>
using namespace std;

// A[i]−2∗A[j]+3∗A[k]−4∗A[l]

void solve()
{
    int n, target, count = 0;
    cin >> n >> target;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = j + 1; k < n; k++)
            {
                for (int l = k + 1; l < n; l++)
                {
                    if (arr[i] - 2 * arr[j] + 3 * arr[k] - 4 * arr[l] == target)
                    {
                        count++;
                    }
                }
            }
        }
    }
    cout << count << endl;
}
int main()
{
    int t = 1;
    // cin >> t;
    for (int i = 1; i <= t; i++)
    {
        solve();
    }
}