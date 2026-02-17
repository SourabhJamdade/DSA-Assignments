#include <iostream>
using namespace std;

int main()
{
    long long n, m, count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> m;
        if (m != 0)
        {
            if (18 % m == 0 or m % 45 == 0)
            {
                count++;
            }
        }
        else if (m % 45 == 0)
            count++;
    }
    cout << count << endl;
}