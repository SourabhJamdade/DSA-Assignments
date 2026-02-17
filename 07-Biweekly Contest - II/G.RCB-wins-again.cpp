#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int n, i, j;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    i = (n / 2) - 1;
    j = (n / 2);

    while (i >= 0)
    {
        cout << arr[i] << " " << arr[j] << " ";
        i--;
        j++;
    }
}