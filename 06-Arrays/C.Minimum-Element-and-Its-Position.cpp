#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    long long n, min, index = 0;
    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    for (long long i = 0; i < n; i++)
    {
        if (min > arr[i])
            min = arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            index = i;
            break;
        }
    }
    cout << min << " " << index + 1;
}