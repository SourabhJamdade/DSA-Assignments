#include <iostream>
using namespace std;

int main()
{
    long long n, fact = 1;

    cin >> n;
    for (long long i = 1; i <= n; i++)
        fact *= i;
    cout << fact << endl;
}