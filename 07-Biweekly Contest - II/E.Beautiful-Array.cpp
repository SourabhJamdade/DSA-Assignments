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
        if (arr[i] != arr[0])
        {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}