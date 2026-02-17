#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int r, c, min;
    cin >> r >> c;
    int arr[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        min = arr[i][0];
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] < min)
                min = arr[i][j];
        }
        cout << min << " ";
    }
}