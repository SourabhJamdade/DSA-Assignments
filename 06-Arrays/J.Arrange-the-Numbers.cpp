#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int arr[n];

    int i = 0;
    int j = n - 1;
    int num = 1;

    while (i <= j)
    {
        if (i == j)
        {
            arr[i] = num;
            break;
        }
        arr[i] = num++;
        arr[j] = num++;
        i++;
        j--;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
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