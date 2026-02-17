#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 or j == 1 or j == i) // need to remove i == n as this is bottom boundary
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i == 1 or j == 1 or j == i) // need to remove i == n-1 as this is upper boundary
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}