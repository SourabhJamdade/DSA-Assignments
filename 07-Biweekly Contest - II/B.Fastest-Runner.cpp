#include <iostream>
using namespace std;

int main()
{
    int n, id = 1;

    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    long long min = arr[0];

    for (long long i = 0; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }

    for (long long i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            id = i + 1;
        }
    }
    cout << id;
}