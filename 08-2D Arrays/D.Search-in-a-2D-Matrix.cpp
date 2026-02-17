#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int r, c, target;
    bool flag = false;
    cin >> r >> c >> target;
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
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == target)
                flag = true;
        }
    }

    if (flag)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}