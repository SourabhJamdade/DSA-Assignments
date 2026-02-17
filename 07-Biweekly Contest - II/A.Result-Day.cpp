#include <iostream>
using namespace std;

int main()
{
    int n, m;
    int p = 0, f = 0;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> m;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] >= m)
        {
            p++;
        }
        else
        {
            f++;
        }
    }

    cout << "Pass: " << p << endl;
    cout << "Fail: " << f << endl;
}