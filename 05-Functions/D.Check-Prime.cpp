#include <bits/stdc++.h>
using namespace std;

void isPrime(int num)
{
    int count = 0;
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        cout << "Prime";
    else
        cout << "Not Prime";
}

int main()
{
    // your code goes here
    int n;
    cin >> n;
    isPrime(n);
}