#include <iostream>
using namespace std;

bool isPrime(long long num)
{
    long long count = 0;
    for (long long i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            count++;
        }
    }
    return (count <= 4);
}

int main()
{
    int n;
    cin >> n;

    for (long long i = 1; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
}