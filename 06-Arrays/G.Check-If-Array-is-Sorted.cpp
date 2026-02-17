#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long n;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool flag = true;

    for (long long i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            flag = false;
            break;
        }
    }
    cout << (flag ? "YES" : "NO") << '\n';
}