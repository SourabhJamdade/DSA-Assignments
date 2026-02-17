#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int r, c;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < c; i++)
    {
        cout << arr[0][i] << " ";
    }

    for (int i = 1; i < r; i++)
    {
        cout << arr[i][c - 1] << " ";
    }

    if (r > 1)
    {
        for (int i = c - 2; i >= 0; i--)
        {
            cout << arr[r - 1][i] << " ";
        }
    }

    if (c > 1)
    {
        for (int i = r - 2; i >= 1; i--)
        {
            cout << arr[i][0] << " ";
        }
    }
}