#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    int m;
    cin >> m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr2[i];
    }

    bool first = false;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (arr1[i] == arr2[j])
            {
                cout << arr1[i] << " ";
                arr2[j] = -1; // added garbage value
                break;
            }
        }
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