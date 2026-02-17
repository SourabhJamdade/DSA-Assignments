#include <bits/stdc++.h>
using namespace std;

void printFact(unsigned long long num1, unsigned long long num2)
{
    unsigned long long i, min, hcf;
    min = num1 > num2 ? num2 : num1;
    for (i = min; i >= 1; i--)
    {
        if (num1 % i == 0 and num2 % i == 0)
        {
            hcf = i;
            break;
        }
    }
    cout << hcf;
}

int main()
{
    unsigned long long n, m;
    cin >> n >> m;
    printFact(n, m);
    return 0;
}