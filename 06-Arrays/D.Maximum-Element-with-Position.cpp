#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long n, max, index = 0;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    max = arr[0];

    for (long long i = 0; i < n; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
            index = i;
        }
    }
    cout << max << " " << index + 1;
}