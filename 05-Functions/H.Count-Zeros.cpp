#include <bits/stdc++.h>
using namespace std;

int countZeros(long long num)
{
    if (num == 0)
        return 1;
    long long count = 0;

    while (num > 9)
    {
        if (num % 10 == 0)
        {
            count++;
        }
        num = num / 10;
    }

    return count;
}

int main()
{
    long long n;
    cin >> n;
    cout << countZeros(n);
}