#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int c0 = 0, c1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
            c0++;
        else if (arr[i] == 1)
            c1++;
    }

    for (int i = 0; i < c0; i++)
    {
        cout << 0 << " ";
    }
    for (int i = 0; i < c1; i++)
    {
        cout << 1 << " ";
    }

    cout << endl;
}

int main()
{
    // your code goes here

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        solve();
    }
}