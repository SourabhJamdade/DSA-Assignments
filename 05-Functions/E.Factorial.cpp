#include <bits/stdc++.h>
using namespace std;

void printFact(unsigned long long num)
{
    unsigned long long fact = 1;
    for (unsigned long long i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << fact << " ";
}

int main()
{
    unsigned long long n;
    cin >> n;
    if (n <= 20)
        printFact(n);
    return 0;
}