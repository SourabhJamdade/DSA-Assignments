#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int r, c, max = 0;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    max = arr[0][0];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] > max)
                max = arr[i][j];
        }
    }
    cout << max << endl;
}