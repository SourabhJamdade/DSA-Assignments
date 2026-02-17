#include <iostream>
using namespace std;

void printFactors(long long num)
{
    bool falg = false;
    for (long long i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            int last = i % 10;
            if (last == 2 or last == 7)
            {
                cout << i << " ";
                falg = true;
            }
        }
    }
    if (!falg)
    {
        cout << -1;
    }
}

int main()
{
    int n;
    cin >> n;
    printFactors(n);
}