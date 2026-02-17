#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long n, m, count = 0;
    cin >> n >> m;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        if (m == arr[i])
            count++;
    }

    cout << count;
}