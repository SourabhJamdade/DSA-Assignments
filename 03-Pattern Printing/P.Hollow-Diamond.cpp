#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 or j == i or i == 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }

    for (int i = n - 1; i >= 1; i--)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 or j == i or i == 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}