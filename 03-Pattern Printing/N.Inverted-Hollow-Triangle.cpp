#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = n; i >= 1; i--)
    {
        // for space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // for stars
        for (int j = 1; j <= i; j++)
        {
            if (j == 1 or j == i or i == 1 or i == n)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
}