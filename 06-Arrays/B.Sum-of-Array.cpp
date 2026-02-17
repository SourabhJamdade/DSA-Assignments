#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long n, sum = 0;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum;
}