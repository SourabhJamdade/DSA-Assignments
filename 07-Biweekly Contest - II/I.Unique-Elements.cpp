#include <iostream>
using namespace std;

int main()
{
    int n;
    bool flag = false;

    cin >> n;
    long long arr[n];

    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (long long i = 0; i < n; i++)
    {
        long long count = 0;
        for (long long j = 0; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
            }
        }
        if (count == 1)
        {
            cout << arr[i] << " ";
        }
    }
}