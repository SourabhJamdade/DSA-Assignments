#include <bits/stdc++.h>
using namespace std;

int isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    return count == 2;
}

int main()
{
    // your code goes here
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        if (isPrime(i))
            cout << i << " ";
    }
}