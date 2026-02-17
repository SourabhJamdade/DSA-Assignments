#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    if (n == m || (n <= 1 && m <= 1))
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
}