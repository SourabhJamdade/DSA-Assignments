#include <iostream>
using namespace std;

int main()
{
    long long n, m, count = 0;
    cin >> n;
    m = n;
    while (n != 0)
    {
        if (n % 10 == 0)
            count++;
        n = n / 10;
    }
    if (m == 0)
        count++;
    cout << count << endl;
}